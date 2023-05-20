#include<iostream>

using namespace std;

int main()
{
    int n[10];
    cout<<"Enter array element : ";
    for(int i =0 ;i<10;i++){
        cin>>n[i];
    }
    for(int a: n)
        cout<<a<<endl;

    return 0;

}