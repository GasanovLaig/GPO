#pragma once
#include <string>

struct Book
{// TODO: чтобы не писать везде std его лучше подключать в начале файла
	//При подключении такого заголовочного файла может возникнуть
	//конфликт имен из-за using namespace std;
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