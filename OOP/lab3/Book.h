#pragma once
#include <string>

struct Book
{
	std::string Name;
	unsigned short PublicationYear;
	size_t PagesNumber;
	std::string Authors[10];
	unsigned short AuthorsCount;
};

void DemoBook();
void ReadBookFromConsole(Book& book);
void WriteBookToConsole(const Book& book);
int FindBookByAuthor(const Book* books, int booksCount, std::string authors);