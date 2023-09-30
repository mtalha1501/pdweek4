#include<iostream>
using namespace std;

void eq(int numb1, int numb2);

main () 
{
	int numb1, numb2;
	eq(numb1, numb2);

}

void eq(int numb1, int numb2)
{
	cout<<"Enter the first number: ";
	cin >> numb1;
	cout<<"Enter the second number: ";
	cin >> numb2;
	if ( numb1 == numb2 )
	{ 
	cout<<"true"<< endl;
}
	else 
	{
	cout<<"false"<<endl;
	}


}