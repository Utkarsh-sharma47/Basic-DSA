#include<iostream>
using namespace std;
int main()
{
    int n,s,t;
    cout<<"enter no of elements ";
    cin>>n;
    int inarr[(n+1)];
    inarr[0];


    for(int z=1;z<=n;z++)
     {
         cout<<" enter element no "<<z<<" = ";
         cin>>inarr[z];
     }

     int k;
     cout<<" input the sum you want ";
     cin>>k;

     for(int i=0;i<=n;i++)
     {
         s=0;
         t=0;
         for(int j=i+1;j<=n;j++)
         {
             t=inarr[j]+s;
             s=t;
             if(s==k)
             {
                 cout<<" index "<<i+1<<" to "<<j;
                 break;
             }
         }
     }


    return 0;
}
