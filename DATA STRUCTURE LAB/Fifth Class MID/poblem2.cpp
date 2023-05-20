#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cout<<"Input a sentence : ";
    getline(cin,a);
    int count =0;
    for(int i=0;i<a.length();i++){
        if(a[i] ==' '){
            count++;
        }
    }
    count++;
    cout<<"Total Number of word : "<<count<<endl;
}