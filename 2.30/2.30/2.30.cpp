// Excercise 2.30 BMI Calculator

#include <iostream>
using namespace std;

int main()
{

	int weight = 0;
	int height = 0;
	cout << "Enter your weight (lbs):";
	cin >> weight;

	cout << "Enter your height (in):";
	cin >> height;

	int body = (weight * 703) / (height * height);

	cout << "Your BMI is:" << body;

	cout << "\n\nImportant information about BMI Values\n Underweight: Less than 18.5\n Normal: between 18.5 and 24.9\n Overweight: between 25 and 29.9\n Obese: 30 or greater\n";
}