#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter no. ";
    cin>>a;
    int n;
    for(n=2;n<a;n=n+1)
    {
        if(a%n==0)
        {
            cout<<"non prime brou";
            break;
        }
    }
    if(n==a)
    {
        cout<<"prime";
    }
    return 0;

}
