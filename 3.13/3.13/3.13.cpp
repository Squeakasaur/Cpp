//Excercise 3.13 Invoice class

#include <iostream>
#include <string>

using namespace std;

/* invoice class*/
class invoice
{
public:

	void invoicedetails(string Details1,string Details2,int Details3, int Details4, int Details5)
	{
		cout << "Part Number: " << Details1 << endl;
		cout << "Part Description: " << Details2 << endl;
		cout << "Quantity: " << Details3 << endl;
		cout << "Price: " << Details4 << endl;
		cout << "Invoice Total: " << Details5 << endl;

		
	}


};



int main()
{
	
	string descrip;
	string part;
	int price = 0;
	int quantity = 0;
	invoice myInvoice;
	

	cout << "Invoice System v1.0\n\n" << endl; /* program title or welcome message*/


	/* requests and stores the part number*/
	cout << "Enter Part Number: "; 
	getline(cin, part);   
	cout << endl;
	
	/* requests and stores the part description */
	cout << "Enter Part Description: ";
	getline(cin, descrip);
	cout << endl;
	
	/* requests and stores the part quantity */
	cout << "Enter Quantity: ";
	cin >> quantity;
	cout << endl;

	/* requests and stores the price */
	cout << "Enter Price: ";
	cin >> price;
	cout << endl;


	/* declares variable total and multiplies quantity by price to give the invoice total*/
	int total = quantity * price;
	
	myInvoice.invoicedetails(part,descrip, quantity, price, total);

}