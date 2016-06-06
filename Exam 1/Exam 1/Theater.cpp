#include <iostream>
#include <string>
#include "Theater.h"
#include "Movie.h"



void Theater::AddMovie(Movie& movie) {
	Movie Title = movie;
}

string Theater::GetMovieForHour(int hour) 
{
	return Movie::GetTitle();
}
int Theater::GetShowTimeForGenre(string Genre) 
{
	int ShowTimeForGenre = Movie::GetShowTime();
	return ShowTimeForGenre;
}
int Theater::GetPopcornPrice() 
{
	return PopcornPrice;
}
int Theater::GetCokePrice() 
{
	return CokePrice;
}