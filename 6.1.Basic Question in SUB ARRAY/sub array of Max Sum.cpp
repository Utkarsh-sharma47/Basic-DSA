#include<iostream>
using namespace std;
int main()
{
    int n,s,ps,ms;

    ps=0;
    cout<<"enter no of elements ";
    cin>>n;
    int inarr[n];
    int myarr[(n/2)*(n+1)];


    for(int z=0;z<n;z++)
     {
         cout<<" enter element no "<<z<<" = ";
         cin>>inarr[z];
     }


         for(int i=0;i<=n;i++)
         {
             s=0;
             for(int j=i+1;j<n;j++)
             {
                 s=inarr[j]+s;
                 if(s>ps)
                 {
                    ms=s;
                 }
                 ps=s;
             }
         }
     }



     return 0;
}


