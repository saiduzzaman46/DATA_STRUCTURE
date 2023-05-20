#include<iostream>
using namespace std;

struct Person
{
   string name;
   Person *child;
};


int main(){
    Person p;
    p.name="A";
    p.child=new Person[2];
    p.child[0].name="B";
    p.child[0].child=NULL;
    p.child[1].name="C";
    p.child[1].child=NULL;

    cout<<p.name<<endl;
    cout<< p.child[0].name<<endl;
    cout<< p.child[0].child<<endl;
    cout<< p.child[1].name<<endl;
    cout<< p.child[1].child<<endl;


}