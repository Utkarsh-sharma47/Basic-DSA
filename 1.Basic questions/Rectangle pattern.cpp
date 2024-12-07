#include<iostream>
using namespace std;

int main()
{
    int c,r;
    cout<<"enter columns=";
    cin>> c;
    cout<<"enter rows=";
    cin>> r;

    for(int i=1;i<=c;i++)
    {

        for(int k=1;k<=r;k++)
        {
            cout<<"* ";
        }
        cout<< endl;

    }
    return 0;
}
