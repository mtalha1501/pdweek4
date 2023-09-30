#include <iostream>
using namespace std;

string tpChecker(int nOFpeople, int tp);

int main() {
    int nOFpeople, tp;
    cout << "Number of people in the household: ";
    cin >> nOFpeople;
    cout << "Number of rolls of TP: ";
    cin >> tp;

    tpChecker(nOFpeople, tp);
}

string tpChecker(int nOFpeople, int tp) {
    int sheetsPerRoll = 500;
    int sheetsPerDay = 57;
    int days = (tp * sheetsPerRoll) / (nOFpeople * sheetsPerDay);

        if (days < 14) 
	{
        cout<< "Your TP will only last " << days << " days, buy more!";
        }
	else
	{
        cout<< "Your TP will last " << days <<" days, no need to panic!";
        }
}


