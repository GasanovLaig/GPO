#include "DemoMakeAndCopyFunctions.h"

#include "Rectangle.h"
#include "Flight.h"
#include "Movie.h"
#include "Time.h"

void DemoMakeAndCopyFunctions()
{
	Task222::Rectangle* rectangle = MakeRectangle(0.0, 0.0, "black");
	Flight* flight = MakeFlight("A", "B", 3600);
	Movie* movie = MakeMovie("M", 128, 2020, Action, 10.0);
	Time* time = MakeTime(23, 59, 59);

	Task222::Rectangle* copiedRectangle = CopyRectangle(rectangle);
	Flight* copiedFlight = CopyFlight(flight);
	Movie* copiedMovie = CopyMovie(movie);
	Time* copiedTime = CopyTime(time);

	delete time;
	delete movie;
	delete flight;
	delete rectangle;
	delete copiedRectangle;
	delete copiedFlight;
	delete copiedMovie;
	delete copiedTime;
}