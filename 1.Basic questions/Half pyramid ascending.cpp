#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"enter rows= ";
    cin>> r;

    for(int i=1;i<=r;i++)
    {
        for(int k=r;k>=1;k=k-1)
        {
            if(k<=i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }

        }
            cout<< endl;
    }

    return 0;
}
