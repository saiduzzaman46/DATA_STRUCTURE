#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cout << "Enter the size of first array : ";
    cin >> n;
    int firstArray[n];
    cout << "Enter the first array element : ";
    for (i = 0; i < n; i++)
    {
        cin >> firstArray[i];
    }
    int m;
    cout << "Enter the size of second array : ";
    cin >> m;
    int secondArray[m];
    cout << "Enter the second array element : ";
    for (i = 0; i < m; i++)
    {
        cin >> secondArray[i];
    }
    
    bool found = false;

    for(i=0;i<n;i++){
        for(int j =0;j<m;j++){
            if(firstArray[i]==secondArray[j]){
                found=true;
                cout<<secondArray[j]<<" ";
            }
        }
    }
    if(!found){
        cout<<"No element found"<<endl;
    }

    return 0;
}