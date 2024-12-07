#include<iostream>
using namespace std;

int main()
{
    int n,d;
    cout<<"enter no of elements ";
    cin>>n;
    int inarr[n];

    for(int z=0;z<n;z++)
     {
         cout<<"enter element no "<<z<<" = ";
         cin>>inarr[z];
     }

     int c,t;
     c=2;
     t=2;

     if(n>=2)
     {
        for(int i=0;i<n;i++)
        {
             d=inarr[i]-inarr[i-1];
             if(inarr[i+1]-inarr[i]==d && t>c)
             {
                 c=c+1;
                 t=t+1;
             }
             else
             {
                 t=t+1;
             }

        }

     cout<<c;
     }
     else
     {
         cout<<c-1;
     }




     return 0;
}
