#include <iostream>
#include <string>
#include "Movie.h"

string Movie::GetTitle()
{
	return Title;
}

string Movie::GetGenre() 
{
	return Genre;
}

int Movie::GetShowTime()
{
	return ShowTime;
}