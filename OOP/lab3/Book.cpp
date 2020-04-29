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

	cout << "������� ������ ��� ������ �����: ";
	string author;
	cin >> author;
	int index = FindBookByAuthor(books, 5, author);
	if (index > 0)
	{
		WriteBookToConsole(books[index]);
	}
	else
	{
		cout << "��� ����� � ������ �������.";
	}
}

void ReadBookFromConsole(Book& book)
{
	cout << "������� �������� �����: ";
	cin >> book.Name;
	cout << "������� ��� �������: ";
	book.PublicationYear = GetValue(1, 2020,
		"��� ������� �� ����� ���� ������� ��� �������!", IsRange);
	cout << "������� ���������� �������: ";
	book.PagesNumber = GetValue(1, INT32_MAX,
		"���������� ������� �� 1 �� 2147483647!", IsRange);
	cout << "������� ���������� �������: ";
	book.AuthorsCount = GetValue(1, 10,
		"���������� ������� ����� ���� �� 1 �� 10!", IsRange);
	cout << "������� ����� �������: ";
	for (size_t i = 0; i < book.AuthorsCount; ++i)
	{
		cout << "\n������� ��� ������ �" << i << ": ";
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
		". - " << book.PagesNumber << "�.";
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