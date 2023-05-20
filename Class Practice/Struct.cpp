#include<iostream>

using namespace std;

struct Appointment
{
    struct Appdata{
        int day,month,year;
    }ad;
    struct Apptime{
        int minute,hours;
    }at;
}a;


int main(){

    a.ad.day=12;
    a.at.hours=2;
    a.ad.month=1;
   
   cout<<a.ad.day;
   cout<<a.at.hours;
   cout<<a.ad.month;

    

}