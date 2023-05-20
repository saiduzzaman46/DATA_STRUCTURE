#include<iostream>
using namespace std;

struct Student
{
    string id;
    string name;
    int age;
    double cgpa;
    string semister;
};


int main(){

    Student s[10];

    for(int i=0;i<10;i++){
        cout<<"Enter Student Id: ";
        cin>>s[i].id;
        cout<<"Enter student Name : ";
        cin>>s[i].name;
        cout<<"Enter Student Age : ";
        cin>>s[i].age;
        cout<<"Enter current CGPA : ";
        cin>>s[i].cgpa;
        cout<<"Enter current Semister : ";
        cin>>s[i].semister;
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<"Student Id : "<<s[i].id<<endl;
        cout<<"student Name : "<<s[i].name<<endl;
        cout<<"Student Age : "<<s[i].age<<endl;
        cout<<"Current CGPA : "<<s[i].cgpa<<endl;
        cout<<"Current Semister : "<<s[i].semister<<endl;
    }

}