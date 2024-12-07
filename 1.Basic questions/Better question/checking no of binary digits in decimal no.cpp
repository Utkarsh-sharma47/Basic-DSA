#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,q;
    cout<<"enter number ";
    cin>>n;

    for(i=0;n>0;i++)
    {
        n=n/2;
    }
    cout<<pow(2,i);
}
