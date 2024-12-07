#include<iostream>
using namespace std;

int rov(int n,int inarr[])
{
    for(int i=1;i<n;i++)
     {
         for(int j=0;j<i;j++)
         {
             if(inarr[i]==inarr[j])
             {
                 return i;
             }
         }
     }
     return -1;
}

int main()
{
    int n;
    cout<<"enter no of elements ";
    cin>>n;
    int inarr[n];

    for(int z=0;z<n;z++)
     {
         cout<<"enter element no "<<z<<" = ";
         cin>>inarr[z];
     }
     if(rov(n,inarr)!=-1)
     {
         cout<< rov(n,inarr)<<" is first repeating element";
     }
     else{
        cout<<"no element repeated";
     }





     return 0;
}
