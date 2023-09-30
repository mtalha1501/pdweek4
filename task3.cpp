#include<iostream>
using namespace std;

void ticketprice(string name, float finalprice, float tickprice);

main () 
{
	float tickprice;
	float finalprice;
	string name;
	ticketprice(name, finalprice, tickprice);

}
void ticketprice(string name, float finalprice, float tickprice)
{
	cout<<"Enter the country's name: ";
	cin >> name;
	cout<<"Enter the ticket price in dollars: $";
	cin >> tickprice;
	if (name == "Pakistan")
	{
	finalprice = tickprice-tickprice*0.05;
	cout << "Final ticket price after discount: $"<< finalprice << endl;
	}
	if (name == "Ireland")
	{
	finalprice = tickprice-tickprice*0.10;
	cout << "Final ticket price after discount: $"<< finalprice << endl;
	}
	if (name == "India")
	{
	finalprice = tickprice-tickprice*0.20;
	cout << "Final ticket price after discount: $"<< finalprice << endl;
	}
	if (name == "England")
	{
	finalprice = tickprice-tickprice*0.30;
	cout << "Final ticket price after discount: $"<< finalprice << endl;
	}
	if (name == "Canada")
	{
	finalprice = tickprice-tickprice*0.45;
	cout << "Final ticket price after discount: $"<< finalprice << endl;
	}
}