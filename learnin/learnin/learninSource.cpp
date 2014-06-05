#include <iostream>

int main()
{
	int moon = 238857;
	std::cout << "The moon's distance from the Earth is " << moon;
	std::cout << " miles.\n";
		int moon_kilo = moon * 1.609;
	std::cout << "In kilometers this is " << moon_kilo;
	std::cout << "km.\n";
}