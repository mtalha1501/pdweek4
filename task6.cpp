#include<iostream>
using namespace std;

void time(float h, float m, float hsec, float msec);

main () 
{
	float h, m, hsec, msec;
	cout <<"Enter the number of hours: ";
	cin>> h;
	cout<<"Enter the number of minutes: ";
	cin>> m;
	time(h, m, hsec, msec );


}
void time(float h, float m, float hsec, float msec)
{
	hsec = h*60*60;
	msec = m*60;
	if ( hsec > msec )
	{
	cout<< h <<endl;
	}
	if ( msec > hsec )
	{
	cout << m << endl;
	}
}
	