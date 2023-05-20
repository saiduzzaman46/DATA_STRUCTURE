#include <iostream>
using namespace std;

void increase(void *data, int psize)
{
    if (psize == sizeof(char))
    {
        char *pchar;
        pchar = (char *)data;
        (*pchar)++;
        
    }
    else if (psize == sizeof(int))
    {
        int *pint;
        pint = (int *)data;
        (*pint)++;
    }
}
int main()
{
    // char a = 'x';
    // int b = 1602;
    // increase(&a, sizeof(a));
    // increase(&b, sizeof(b));
    // cout << a << ", " << b << endl;

    int n,*p,sum=0;
    cin>>n;
    p=new int[n];
    for(int i=0;i<n;i++){
        cin>>*(p+i);
        sum+=*p+i;
    }
    cout<<sum;
}