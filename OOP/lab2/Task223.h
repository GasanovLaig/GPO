#pragma once
#include "Task222Structs.h"
#include <string>

void DemoRectangle();
void DemoFlight();
void DemoMovie();
void DemoTime();
//ex 2.2.2.4
void WrongPointers();
//ex2.2.5.1
void WhriteRectangle(const Task222::Rectangle& rectangle);
//ex2.2.5.2
void ReadRectangle(Task222::Rectangle& rectangle);
//ex2.2.5.3
void DemoReadAndWhriteRectangles();
//ex2.2.5.4
void Exchange(Task222::Rectangle& rectangle1, Task222::Rectangle& rectangle2);
//ex2.2.5.5
void FindRectangle(const Task222::Rectangle* rectangles, size_t size);
//ex2.2.5.6
void FindMaxRectangle(const Task222::Rectangle* rectangles, size_t size);
//ex2.2.6.1
void DemoDynamicFlight();
//ex2.2.6.2
void DemoDynamicFlights();
void FindShortestFlight(const Flight* flights, size_t size);