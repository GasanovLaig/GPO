#include "Book.h"
#include "../Common/GetValue.h"
#include <iostream>
using namespace std;

void ReadBookFromConsole(Book& book)
{
	cout << "������� �������� �����: ";
	cin >> book.Name;
	cout << "������� ��� �������: ";
	book.PublicationYear = GetValue(exception("��� ������� �� ����� ���� �������"
		"��� �������!"), 1, 2020, IsRange);
	cout << "������� ���������� �������: ";
	book.PagesNumber = GetValue(exception("���������� ������� �� 1 �� 2147483647!"),
		1, INT32_MAX, IsRange);
	cout << "������� ���������� �������: ";
	book.AuthorsCount = GetValue(exception("���������� ������� ����� ���� �� 1 �� 10!"),
		1i16, 10i16, IsRange);
	for (int i = 0; i < book.AuthorsCount; ++i)
	{
		cout << "\n������� ��� ������ �" << i << ": ";
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

void DemoBook()
{
	Book books[4]
	{
		{"�������� ������������ � ����������� ����������", 2013, 1662, 2,
		"����� �. ������", "���� �. ������"},
		{"������� ������", 1963, 224, 2, "���������� �.", "���������� �."},
		{"����� � ���", 1230, 1869, 1, "�. �. �������"},
		{"������ ����������", 800, 1880, 1, "�. �. �����������"},
	};

	for (int i = 0; i < 4; ++i)
	{
		WriteBookToConsole(books[i]);
		cout << '\n';
	}

	cout << "\n������� ������ ��� ������ �����: ";
	string author;
	cin >> author;
	int index = FindBookByAuthor(books, 4, author);
	if (index > -1)
	{
		WriteBookToConsole(books[index]);
	}
	else
	{
		cout << "��� ����� � ������ �������.";
	}
}