#include <iostream>
using namespace std;
void pet(int holidays);
main(){
    int holidays;
    cout<<"Holidays: ";
    cin>>holidays;
    pet(holidays);

}

void pet(int holidays)
{
    int workDays,gameTime,difference,diffinMinutes,diffinHours;
   

    workDays=365-holidays;
    gameTime=workDays*63+holidays*127;
    difference=30000-gameTime;
  


    if(gameTime<30000){
        diffinHours=difference/60;
        diffinMinutes=difference%60;
        cout<<"Tom sleeps well"<<endl;
        cout<<diffinHours<<" hours and "<<diffinMinutes<<" minutes less for play"<<endl;
    }
        
    if (gameTime>30000){
        diffinHours=-difference/60;
        diffinMinutes=-difference%60;
        cout<<"Tom will run away"<<endl;
        cout<< diffinHours<<" hours and " <<diffinMinutes<<" minutes for play"<<endl;
    }
}

