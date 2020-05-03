#pragma once
#include <string>

struct Book
{
	std::string Name;
	int PublicationYear;
	int PagesNumber;
	short AuthorsCount;
	std::string Authors[10];
};

void ReadBookFromConsole(Book& book);
void WriteBookToConsole(const Book& book);
int FindBookByAuthor(const Book* books, int booksCount, std::string authors);
void DemoBook();