#include<iostream>
using namespace std;

int main()
{
    int n,r,l;
    cout<<"enter any number ";
    cin>> n;
    r=0;


    while(n>0)
    {
        l=n%10;
        r=r*10+l;
        n=n/10;
    }
    cout<<r;






    return 0;
}
