#include<iostream>
using namespace std;

int main()
{
    int n,a;
    cout<<"enter no of elements ";
    cin>>n;
    int inarr[n];
    for(int z=1;z<=n;z++)
     {
         cout<<"enter element no "<<z<<" = ";
         cin>>inarr[z];
     }
     int i;
     cout<<"enter max till number i = ";
     cin>>i;

     for(int j=0;j<i;j++)
     {
         if(inarr[j]>inarr[j+1])
         {
             a=inarr[j];
         }
         else
         {
             a=inarr[j+1];
         }
     }
     cout<<a;






     return 0;
}
