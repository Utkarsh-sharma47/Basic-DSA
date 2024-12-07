#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n;
   cout<<"enter range for prime no = ";   cin>>n;
   int arr[n];
   int c=0;
   for(int z=0; z<=n; z++)
   {
      arr[z]=c;
      c++;
   }
   bool m=0;
   // marking the elements by putting 1 in them
   for(int i=2; i<=sqrt(n); i++)
   {
      for(int j=(i*i); j<=n; j=(j+i) )
      {
         if(arr[j]%i==0 && arr[j]!=1)          /** marking the non prime numbers */
         {
            arr[j]=1;
         }
      }
   }
   // printing the unmarked elements
   for(int z=0; z<=n; z++)
   {
      if(arr[z]!=1 && arr[z]!=0)
      {
         cout<<arr[z]<<",";
      }
   }



   return 0;
}
