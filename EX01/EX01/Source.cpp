//Andrew McNeill
//CS172
//EX01

EX01_01
A) CPU
B) RAM
C) On a disk
D) A binary digit, like 0 or 1
E) Address
F) 8
G) allocates resources like memory to programs that are running
H) is any software that is runs with the support of the operating system.

EX01_02
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void ex02(bool hasPassedTest, int x, int y, int numberOfShares, int boxWidth, int bookWidth, int shelfLife, int outsideTemp);
int main() {
	srand(time(NULL));
	int x = rand() % 10 + 1;
	int y = rand() % 10 + 1;
	int numberOfShares, boxWidth, bookWidth, shelfLife, outsideTemp;
	cout << "Please enter a value: " << endl;
	cin >> numberOfShares;
	cout << "Please enter a box width: " << endl;
	cin >> boxWidth;
	cout << "Please enter a book width: " << endl;
	cin >> bookWidth;
	cout << "Please enter the shelf life of a box of chocolate: \n";
	cin >> shelfLife;
	cout << "Please enter the outside temperature: ";
	cin >> outsideTemp;

	cout << "RESULTS: \n";
	ex02(true, x, y, numberOfShares, boxWidth, bookWidth, shelfLife, outsideTemp);
}
void ex02(bool hasPassedTest, int x, int y, int numberOfShares, int boxWidth, int bookWidth, int shelfLife, int outsideTemp)
{
	cout << hasPassedTest << endl;
	cout << "x = " << x << " & y = " << y << endl;
	if (x > y)
	{
		cout << "x is greater than y\n";
	}
	else
	{
		cout << "y is greater than x\n";
	}
	if (numberOfShares < 100)
	{
		cout << "Your value is less than 100" << endl;
	}
	if (boxWidth % bookWidth == 0)
	{
		cout << "The box width evenly divides by the book width\n";
	}
	if (outsideTemp > 90)
	{
		shelfLife = shelfLife - 5;
		cout << "The new shelf life for the box of chocolate is: " << shelfLife << endl;
	}
	else
	{
		cout << "The shelf life for the box of chocolate is still: " << shelfLife << endl;
	}
}


EX01_03

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void ex03(int squareArea, char userResponse, string mailingAddress);
int main() {
	int squareArea;
	string mailingAddress;
	char userResponse;

	cout << "Please enter the area of the square as an integer: " << endl;
	cin >> squareArea;
	cout << "Please enter either 'y' or 'n'\n";
	cin >> userResponse;
	cout << "Please enter your mailing address: ";
	cin.ignore();
	getline(cin, mailingAddress);
	ex03(squareArea, userResponse, mailingAddress);
}
void ex03(int squareArea, char userResponse, string mailingAddress)
{
	double hypotenuse = sqrt(2 * squareArea);
	cout << "The length of the diagonal of the square is: " << hypotenuse << endl;
	//char tab = "\t";
	if (userResponse == 'y')
	{
		cout << "y/n response: Yes\n";
	}
	else
	{
		cout << "y/n response: No\n";
	}
	cout << "Your mailing address: " << mailingAddress << endl;
}

EX01_04
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void ex04(int number);
void add(int x, int y);
void addOne(int &y);
int main() {
	int number;
	cout << "Please enter a number between 1 and 10: ";
	cin >> number;
	ex04(number);

	srand(time(NULL));
	int x = rand() % 10 + 1;
	int y = rand() % 10 + 1;
	add(x, y);
	addOne(y);

}
void ex04(int number)
{
	if (number < 1 || number > 10)
	{
		do {
			cout << "Please enter a number between 1 and 10: \n";
			cin >> number;
		} while (number < 1 || number > 10);
	}
	int sumOfCubes = 0;
	for (int i = 1; i <= number; i++)
	{
		sumOfCubes += i * 3;
	}
	cout << "The sum of the cubes from 1 to the given number is: " << sumOfCubes << endl;

	int j = number;
	do {
		cout << "*";
		--j;

	} while (j > 0);
	cout << endl;


	for (int a = 1; a <= 40; a++)
	{
		if (a % 2 == 0)
		{
			cout << a << " ";
		}
	}

	cout << "\nDouble your integer: " << 2 * number << endl;
}
void add(int x, int y)
{
	int ans;
	ans = x + y;
	cout << "Add function (x + y): " << x << " + " << y << " = " << ans << endl;
}
void addOne(int &y)
{
	y = y + 1;
	cout << "Pass by reference value (y + 1): " << y << endl;
}

EX01_05
#include <iostream>
using namespace std;

int main() {
	int array[5];
	int userInput = 0;
	int sum = 0;
	int product = 1;
	for (int i = 0; i < 5; i++)
	{

		cout << "Please enter " << 5 - i << " digits: ";
		cin >> array[i];
		sum += array[i];
		product *= array[i];

	}
	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << endl;

	}
	int number;
	cout << "Enter a number: ";
	cin >> number;
	for (int i = 0; i < 5; i++)
	{
		if (array[i] == number)
		{
			cout << "Yes, " << number << " is in the array.";
		}


	}
}