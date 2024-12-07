#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of elements ";
    cin>>n;
    int inarr[n];



    for(int z=0;z<n;z++)
     {
         cout<<" enter element no "<<z<<" = ";
         cin>>inarr[z];
     }

     for(int k=1,m=0;k<=n;k++,m++)
     {
         for(int i=k;i<=n;i++)
         {
             for(int j=m;j<i;j++)
             {
                 cout<<inarr[j]<<" ";
             }
             cout<<endl;
         }
     }



     return 0;
}


