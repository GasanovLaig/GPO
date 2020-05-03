#pragma once
#include <string>

struct Book
{// TODO: чтобы не писать везде std его лучше подключать в начале файла
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