//Excercise 3.13 Invoice class

#include <iostream>
#include <string>
using namespace std;

class invoice
{
public:

	void invoicedetails(string Details1,string Details2,string Details3, string Details4)
	{
		cout << "Invoice Number: " << Details1 << endl;
		cout << "Customer: " << Details2 << endl;
		cout << "Part Number: " << Details3 << endl;
		cout << "Price: " << Details4 << endl;
	}


};



int main()
{
	string invoicenumber;
	string customer;
	string part;
	string price;
	invoice myInvoice;

	cout << "Invoice System v1.0" << endl;


	cout << "Enter Invoice Number : ";
	getline(cin, invoicenumber);
	cout << endl;

	

	cout << "Enter Customer Name: ";
	getline(cin, customer);
	cout << endl;
	
	cout << "Enter Part Number: ";
	getline(cin, part);
	cout << endl;

	cout << "Enter Price: ";
	getline(cin, price);
	cout << endl;
	
	myInvoice.invoicedetails(invoicenumber,customer, part, price);
}