#include<iostream>
using namespace std;

int main(){

    int sum =0;
    int arr[]={1,2,3,4,5};

    for(int i : arr)
        sum+=i;
    cout<<"Sum is :  "<<sum;    

}