#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"enter number";
    cin >> n;

    for(i=0;n>0;i++)
    {
        n=n/10;
    }
    cout<<i;
}
