#pragma once
#include "Task222.h"
#include <string>

void DemoRectangle();
void DemoFlight();
void DemoMovie();
void DemoTime();
//ex 2.2.2.4
void WrongPointers();
//ex2.2.5.1
void WhriteRectangle(const Task::Rectangle& rectangle);
//ex2.2.5.2
void ReadRectangle(Task::Rectangle& rectangle);
//ex2.2.5.3
void DemoReadAndWhriteRectangles();
//ex2.2.5.4
void Exchange(Task::Rectangle& rectangle1, Task::Rectangle& rectangle2);
//ex2.2.5.5
void FindRectangle(const Task::Rectangle* rectangles, size_t size);
//ex2.2.5.6
void FindMaxRectangle(const Task::Rectangle* rectangles, size_t size);
//ex2.2.6.1
void DemoDynamicFlight();
//ex2.2.6.2
void DemoDynamicFlights();
void FindShortestFlight(const Flight* flights, size_t size);