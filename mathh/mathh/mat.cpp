#include <iostream>
using namespace std;

int main()
{
	int math = 7 + 3 * 6 / 2 - 1;
	cout << "The answer to 2.15a is:" << math;

	int mathb = 2 % 2 + 2 * 2 - 2 / 2;
	cout << "\nThe answer to 2.15b is:" << mathb;

	int mathc = (3 * 9 * (3 + (9 * 3 / (3))));
	cout << "\nThe answer to 2.15c is:" << mathc;
}

// Order of Evaluation
// 2.15a 3 * 6 ( Multiplication ), 18 / 2 (division), 9 + 7 (addition), 16 - 1 (subtraction), x = 15
// 2.15b 2 % 2 = 0, ( 2 * 2 ) = 4 , ( 2 / 2 ) = 1 , 4 - 1, x = 3
// 2.15c 3 * 9 = 27, 3 + 9 = 12 * 3 = 36 / 3 = 12 * 27, x = 324

