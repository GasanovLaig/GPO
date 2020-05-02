#pragma once
#include <iostream>
#include <type_traits>
#include <sstream>
#include <regex>

template <typename T>
std::enable_if_t<!std::is_floating_point<T>::value, void>
IsType(const std::string& integerNumber)
{
	std::regex lineFormat("[+-]?[0-9]+");
	if (!std::regex_match(integerNumber, lineFormat))
	{
		throw std::exception("Вводите целое число!");
	}
}

template <typename T>
std::enable_if_t<std::is_floating_point<T>::value, void>
IsType(const std::string& floatPointNumber)
{
	std::regex lineFormat("[+-]?[0-9]+[.]+[0-9]+");
	if (!std::regex_match(floatPointNumber, lineFormat))
	{
		throw std::exception("Вводите десятичную дробь!");
	}
}

template <typename T>
T ConvertToType(const std::string& line)
{
	std::istringstream inputStringStream(line);
	T value;
	inputStringStream >> value;

	if (inputStringStream.fail())
	{
		throw std::exception("Превышен допустимый диапазон для этого типа данных!");
	}

	return value;
}

template <typename T>
bool IsRange(T value, T min, T max)
{
	return (value >= min && value <= max);
}

template <typename T>
T GetValue(const std::exception& errorMessage =
	std::exception("Соблюдайте допустимый диапазон!"),
	T min = 0, T max = 0, bool (*IsRange)(T value, T min, T max) = nullptr)
{
	std::cin.clear();
	std::cin.ignore();

	std::string line;
	while (true)
	{
		try
		{
			getline(std::cin, line);
			IsType<T>(line);
			T value = ConvertToType<T>(line);

			if (IsRange != nullptr &&
				!(IsRange(value, min, max)))
			{
				throw std::exception(errorMessage);
			}

			return value;
		}
		catch (const std::exception& exception)
		{
			std::cerr << exception.what() << "\n->";
		}
	}
}