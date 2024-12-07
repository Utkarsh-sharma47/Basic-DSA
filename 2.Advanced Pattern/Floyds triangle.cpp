#include<iostream>
using namespace std;

int main()
{
    int r,q;
    cout<<"enter rows = ";
    cin>> r;

    for(int i=1;i<=r;i++)
    {
        q= 0.5*(i*i)-(0.5*i)+1;
        for(int k=0;k<i;k++)
        {
            cout<< q+k<<" ";
        }

         cout<< endl;
    }

    return 0;
}
