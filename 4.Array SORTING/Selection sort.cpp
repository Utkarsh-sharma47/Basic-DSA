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
     for(int b=0;b<n-1;b++)
     {
         for(int c=b+1;c<n;c++)
         {
             if(inputarray[b]>inputarray[c])
             {
                int t=inputarray[b];
                inputarray[b]=inputarray[c];
                inputarray[c]=t;

             }

         }

     }
     for(int k=0;k<n;k++)
     {
         cout<<inputarray[k]<<" ";
     }




        return 0;
}
