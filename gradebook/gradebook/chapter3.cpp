#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
	void displayMessage(string courseName) const
	{
		cout << "Welcome to the grade book for \n" << courseName << "!"
			<< endl;
	}

};

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "Enter the course name:" << endl;
	getline(cin, nameOfCourse);
	cout << endl;

	myGradeBook.displayMessage(nameOfCourse);

}