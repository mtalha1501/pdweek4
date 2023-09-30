#include<iostream>
using namespace std;

void flowershop(int redrose, int whiterose, int tulips);

main () 
{
	int redrose, whiterose, tulips;
	cout<<"Red Rose: ";
	cin>> redrose;
	cout<<"White Rose: ";
	cin>> whiterose;
	cout<<"Tulips: ";
	cin>> tulips;
	flowershop(redrose, whiterose, tulips);  


}
void flowershop(int redrose, int whiterose, int tulips)
{
	float redprice = 2.00;
	float whiteprice = 4.10;
	float tuliprice = 2.50;
	float totalprice = (redrose*redprice) + (whiterose*whiteprice) + (tulips*tuliprice);
	if ( totalprice > 200 )
	{
	cout << "Original Price: $" << totalprice << endl;
	cout << "Price after Discount: $" << (totalprice-totalprice*0.20) << endl;
	}
	else
	{
	cout << "Original Price: $" << totalprice << endl;
	cout<<"No discount applied." << endl;
	}
}