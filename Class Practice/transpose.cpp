#include<iostream>
using namespace std;
int main(){
    int mat[3][3];
    cout<<"Enter Your Matrix Elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
        }
    }

cout<<"Your Matrix Is :"<<endl;
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"\t"<<mat[i][j];
    }
    cout<<endl;

 }
 cout<<endl;
 cout<<endl;

 cout<<"Transpose of that Matrix is: "<<endl;
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"\t"<<mat[j][i];
    }
    cout<<endl;
 }


return 0;
}
