#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<" n = "; cin>>n;
   int n1=n;
   int k=1;
   for(int i=1; i<n; i++)
   {
      for(int j=n-i; j<100; j--)
      {
         if(j>0)
         {
            cout<<"  ";
         }
         else
         {
            int l=(i*i+i)/2;
            while(k<=l)
            {
               cout<<k<<"  ";
               k=k+1;
            }
            break;
         }
      }
      cout<<endl;
   }


	return 0;
}
