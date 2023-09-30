#include<iostream>
using namespace std;

void truefalse(string value);

main () 
{

	string value;
	truefalse(value);

}
void truefalse(string value)
{
	cout << "Enter 'true' or 'false': ";
	cin >> value;
	if ( value == "true" )
	{
	cout<<"false"<<endl;
	}
	if ( value == "false" )
	{
	cout <<"true"<< endl;
	}
} 