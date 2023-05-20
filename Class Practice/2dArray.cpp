#include <iostream>
using namespace std;

int main()
{
    int mimo[4][4], i = 0;
    for (int n = 0; n < 4; n++)
        for (int m = 0; m < 4; m++)
            mimo[n][m] = ++i;

    for (int n = 0; n < 4; n++){
        for (int m = 0; m < 4; m++){
            cout << mimo[n][m] << " ";
        }
         cout << endl;     
    }
    int sum =0;
    for(int n=0;n<4;n++){
        for(int m=0;m<4;m++){
            if(n==m){
                sum+=mimo[n][m];
            }
        }
    }
    cout<<sum<<endl;

    for(int n=0;n<4;n++){
        for(int m=0;m<=n;m++){
            cout<<mimo[n][m]<<" ";
        }
        cout<<endl;
    }
        
   

    // int array[3 * 5], j = 0;

    // for (int n = 0; n < 3; n++)
    //     for (int m = 0; m < 5; m++)
    //         array[5 * n + m] = ++j;
    // cout<<array<<endl;
    // cout<<&array[1]<<endl;
    // cout<<&array[2]<<endl;
    // for (int n : array)
    //     cout << n << " ";
}