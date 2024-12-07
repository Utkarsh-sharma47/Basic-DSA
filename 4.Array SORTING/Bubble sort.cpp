#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no of elements ";
    cin>>n;
    int inputarray[n];
    int myarray[n];
    for(int i=0;i<n;i++)
     {
         cout<<"enter element no "<<i<<" = ";
         cin>>inputarray[i];
     }
     for(int b=1;b<=n-1;b++)
     {
         for(int c=0;c<=n-b;c++)
         {
             if(inputarray[c]>inputarray[c+1])
             {
                 int t;
                 t=inputarray[c];
                 inputarray[c]=inputarray[c+1];
                 inputarray[c+1]=t;
             }
         }
     }






     for(int k=0;k<n;k++)
     {
         cout<<inputarray[k]<<" ";
     }




        return 0;
}
