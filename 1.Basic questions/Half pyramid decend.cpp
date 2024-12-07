#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"enter rows= ";
    cin>> r;

    for(int i=r;i>0;i--)
    {
         for(int k=1;k<=i;k++)
         {
             cout<<"* ";

         }
         cout<< endl;
    }

    return 0;
}
