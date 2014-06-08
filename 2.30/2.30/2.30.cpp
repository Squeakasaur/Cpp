// Excercise 2.30 BMI Calculator

#include <iostream>
using namespace std;

int main()
{

	float weight = 0.0; //initializing weight to 0
	float height = 0.0; //initializing height to 0
	cout << "Enter your weight (lbs):";
	cin >> weight;

	cout << "Enter your height (in):";
	cin >> height;

	float body = (weight * 703) / (height * height); //BMI formula

	cout << "Your BMI is:" << body;

	cout << "\n\nImportant information about BMI Values\n Underweight: Less than 18.5\n Normal: between 18.5 and 24.9\n Overweight: between 25 and 29.9\n Obese: 30 or greater\n" << endl;
}