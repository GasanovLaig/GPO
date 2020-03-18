#pragma once

// TODO: êàæäîå ïåðå÷èñëåíèå â ñâî¸ì ôàéëå
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

//ex 2.2.8.3, ex 2.2.8.4
void DemoEnums();
//ex 2.2.8.5
// TODO: грам ошибка
void WhriteColor(Color color);
//ex 2.2.8.6
Color ReadColor();
//ex 2.2.8.7
size_t CountRed(const Color* colors, size_t size);
//ex 2.2.8.8
size_t CountColor(const Color* colors, size_t size, Color findedColor);