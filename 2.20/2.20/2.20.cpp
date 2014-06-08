// Assessment 2.20  Circle program

#include <iostream>
using namespace std;

int main()
{
	int r = 0; //r is for Radius , initializing r to 0.


	cout << "Please enter the Circle's raius:";
	cin >> r;

	int diameter = 2 * r; //calculation for Diameter
	int circ = 2 * 3.14159 * r; // calculation for the Circumfrance
	double area = 3.14159 * r * r; // calculation for area. 

	cout << " Diameter:" << diameter;
	cout << "\n Circumfrance:" << circ;
	cout << "\n Area:" << area;



}