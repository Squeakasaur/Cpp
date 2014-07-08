//Excercise 3.13 Invoice class

#include <iostream>
#include <string>
using namespace std;

class invoice
{
public:

	void invoicedetails(string Details1, string Details2, string Details3, string Details4)
	{
		cout << "Invoice Number\n" << Details1 << endl;
		

	}


};



int main()
{
	string invoicenumber;
	invoice myInvoice;

	cout << "Invoice System v1.0\n";
	getline(cin, invoicenumber);
	cout << endl;

	myInvoice.invoicedetails(invoicenumber);

}