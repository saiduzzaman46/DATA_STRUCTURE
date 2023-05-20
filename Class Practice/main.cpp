#include <iostream>

using namespace std;

int main() {
  // for(int i=0,j=0;i<3 && j<3;i++,j++){
  //   cout<<i<<","<<j<<endl;
  // }

  // for(int i=0;i<3;i++){
  //   for(int j=0;j<3;j++){
  //     cout<<i<<","<<j<<endl;
  //   }
  // }
  int a[5]={1,2,3,4,5};

  for(int i=5-1;i>=0;i--){
    cout<<a[i]<<" ";
  }
  return 0;
}