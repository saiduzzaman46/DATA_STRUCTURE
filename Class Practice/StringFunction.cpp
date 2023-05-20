#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char s1[] = "Hello";
    char s2[] = "World";

    char c[10]={'H','E','L','L','O','\0'};


    cout<<strchr(s2,'r')<<endl;
    cout<<strcat(s1,s2)<<endl;
    cout<<strcpy(s1,s2)<<endl;


    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<strlen(c)<<endl;

}