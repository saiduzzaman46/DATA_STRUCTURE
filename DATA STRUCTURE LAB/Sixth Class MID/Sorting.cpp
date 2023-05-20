#include<iostream>

using namespace std;

void Bubble(int a[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}

int LinearSearch(int a[],int key,int n){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return a[i];
        }
    }
    return -1;
}
void Insertion(int a[],int n){
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while (j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        
    }
}

void SelectionSort(int a[],int n){
    int k;
    for(int i=0;i<n-1;i++){
        for(int j=k=i;j<n;j++){
            if(a[j]<a[k]){
                k=j;
            }
        }
        int temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
}

int main(){

    int a[5]={7,2,9,6,4};
    Bubble(a,5);

    for(int i : a)
        cout<<i<<" ";

    cout<<endl;
    

    cout<< LinearSearch(a,9,5) <<endl;    




}