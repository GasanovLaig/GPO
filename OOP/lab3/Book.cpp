#include "Book.h"
#include "../Common/GetValue.h"
#include <iostream>
using namespace std;

void DemoBook()
{
	Book books[5];
	for (int i = 0; i < 5; ++i)
	{
		ReadBookFromConsole(books[i]);
		WriteBookToConsole(books[i]);
		cout << '\n';
	}

	cout << "Введите автора для поиска книги: ";
	string author;
	cin >> author;
	int index = FindBookByAuthor(books, 5, author);
	if (index > 0)
	{
		WriteBookToConsole(books[index]);
	}
	else
	{
		cout << "Нет книги с данным автором.";
	}
}

void ReadBookFromConsole(Book& book)
{
	cout << "Введите название книги: ";
	cin >> book.Name;
	cout << "Введите год издания: ";
	book.PublicationYear = GetValue(1, 2020,
		"Год издания не может быть позднее чем текущий!", IsRange);
	cout << "Введите количество страниц: ";
	book.PagesNumber = GetValue(1, INT32_MAX,
		"Количество страниц от 1 до 2147483647!", IsRange);
	cout << "Введите количество авторов: ";
	book.AuthorsCount = GetValue(1, 10,
		"Количество авторов может быть от 1 до 10!", IsRange);
	cout << "Введите имена авторов: ";
	for (size_t i = 0; i < book.AuthorsCount; ++i)
	{
		cout << "\nВведите имя автора №" << i << ": ";
		cin >> book.Authors[i];
	}
}

void WriteBookToConsole(const Book& book)
{
	for (unsigned short i = 0; i < book.AuthorsCount; ++i)
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