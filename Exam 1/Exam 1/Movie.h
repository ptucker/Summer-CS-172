#include <iostream>
#include <string>
#include <cstdlib>
#ifndef MOVIE_H_
#define MOVIE_H_
using namespace std;

class Movie
{
private:
	static string Title;
	static string Genre;
	static int ShowTime;
public:
	Movie() 
	{
		Title = "Shiloh";
		Genre = "Action";
		ShowTime = 2;
	}

	Movie(string title, string genre, int showtime) 
	{
		Title = title;
		Genre = genre;
		ShowTime = showtime;
	}

	static string GetTitle();
	static string GetGenre();
	static int GetShowTime();
};

#endif