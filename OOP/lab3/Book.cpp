#include "Book.h"
#include "../Common/GetValue.h"
#include <iostream>
using namespace std;

void ReadBookFromConsole(Book& book)
{
	cout << "Введите название книги: ";
	cin >> book.Name;
	cout << "Введите год издания: ";
	book.PublicationYear = GetValue(exception("Год издания не может быть позднее"
		"чем текущий!"), 1, 2020, IsRange);
	cout << "Введите количество страниц: ";
	book.PagesNumber = GetValue(exception("Количество страниц от 1 до 2147483647!"),
		1, INT32_MAX, IsRange);
	cout << "Введите количество авторов: ";
	book.AuthorsCount = GetValue(exception("Количество авторов может быть от 1 до 10!"),
		1i16, 10i16, IsRange);
	for (int i = 0; i < book.AuthorsCount; ++i)
	{
		cout << "\nВведите имя автора №" << i << ": ";
		cin >> book.Authors[i];
	}
}

void WriteBookToConsole(const Book& book)
{
	for (short i = 0; i < book.AuthorsCount; ++i)
	{
		cout << book.Authors[i] << (i != book.AuthorsCount ? ", " : ". ");
	}

	cout << book.Name << ". " << book.PublicationYear <<
		". - " << book.PagesNumber << "с.";
}

int FindBookByAuthor(const Book* books, int booksCount, std::string author)
{
	for (int i = 0; i < booksCount; ++i)
	{
		for (int j = 0; j < books[i].AuthorsCount; ++j)
		{
			if (books[i].Authors[j] == author)
			{
				return j;
			}
		}
	}

	return -1;
}

void DemoBook()
{
	Book books[4]
	{
		{"Цифровая схемотехника и архитектура компьютера", 2013, 1662, 2,
		"Девид М. Харрис", "Сара Л. Харрис"},
		{"Далекая радуга", 1963, 224, 2, "Стругацкий А.", "Стругацкий Б."},
		{"Война и мир", 1230, 1869, 1, "Л. Н. Толстой"},
		{"Братья Карамазовы", 800, 1880, 1, "Ф. М. Достоевский"},
	};

	for (int i = 0; i < 4; ++i)
	{
		WriteBookToConsole(books[i]);
		cout << '\n';
	}

	cout << "\nВведите автора для поиска книги: ";
	string author;
	cin >> author;
	int index = FindBookByAuthor(books, 4, author);
	if (index > -1)
	{
		WriteBookToConsole(books[index]);
	}
	else
	{
		cout << "Нет книги с данным автором.";
	}
}