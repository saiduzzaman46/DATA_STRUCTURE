#include<iostream>
using namespace std;

int main(){
    int n,k,i,margeArray[100];
    cout<<"Enter the size of first array : ";
    cin>>n;
    int firstArray[n];
    cout<<"Enter the first array element : ";
    for(i=0;i<n;i++){
        cin>>firstArray[i];
        margeArray[i]=firstArray[i];
    }
    k=i;
    int m;
    cout<<"Enter the size of second array : ";
    cin>>m;
    int secondArray[m];
    cout<<"Enter the second array element : ";
    for(i=0;i<m;i++){
        cin>>secondArray[i];
        margeArray[k]=secondArray[i];
        k++;
    }
    for(i=k-1;i>=0;i--){
        cout<<margeArray[i]<<" ";
    }

    return 0;
}