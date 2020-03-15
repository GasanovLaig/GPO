#pragma once

//ex 2.2.8.1
enum Color
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	Blues,
	Purple
};

enum DayOfWeek
{
	Monday,
	Thrusday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

enum MovieGenre
{
	Comedy,
	Drama,
	Thriller,
	Action,
	Horror,
	Blockbuster
};

enum FormOfEducation
{
	FullTime,
	ParTime,
	Evening,
	Remote
};

enum ManufacturerOfSmartphones
{
	Apple,
	Huawei,
	Meizu,
	Xiaomi,
	Samsung
};

enum Season
{
	Winter,
	Spring,
	Summer,
	Autumn
};

//ex 2.2.8.3, ex 2.2.8.4
void DemoEnums();
//ex 2.2.8.5
void WhriteColor(Color color);
//ex 2.2.8.6
Color ReadColor();
//ex 2.2.8.7
size_t CountRed(const Color* colors, size_t size);
//ex 2.2.8.8
size_t CountColor(const Color* colors, size_t size, Color findedColor);