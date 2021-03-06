#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

class Theater
{
private:

	string Name;
	string Phone;
	int PopcornPrice = 4;
	int CokePrice = 2;
	
public:
	int hour = 1;
	Theater(string name, string phonenumber) 
	{
		Name = name;
		Phone = phonenumber;
	}
	void AddMovie(Movie& M);
	string GetMovieForHour(int hour);
	int GetShowTimeForGenre(string g);
	int GetPopcornPrice();
	int GetCokePrice();
};