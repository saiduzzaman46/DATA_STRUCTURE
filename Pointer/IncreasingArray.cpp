#include <iostream>
using namespace std;
int main()
{
    // int *p = new int[5];
    // int *q = new int[10];
    // for (int i = 0; i < 5; i++)
    // {
    //     p[i]=i+1;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     q[i] = p[i];
    // }
    // delete[] p;
    // p = q;
    // q = NULL;
    //  for (int i = 5; i < 10; i++)
    // {
    //     p[i]=i+1;
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << &p[i] << " ";
    //     p++;
    // }

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *q ;
    // cout<<q;
    // q++;
    // q++;
    // cout << arr << endl;
    // cout << *q<< endl;

    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*arr+20<<endl;

    cout<<&2[arr]<<endl;
    // cout<<*(arr+2)<<endl;
    // for(int i =0;i<10;i++){
    //     cout<<&arr[i]<<" ";
    // }
}