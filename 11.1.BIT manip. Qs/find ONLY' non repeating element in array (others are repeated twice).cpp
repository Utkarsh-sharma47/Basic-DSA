#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"enter no of elements = "; cin>>n;
   int arr[n];
   for(int z=0;z<n;z++)
   {
      cout<<"enter elments no. "<<(z+1)<<" = ";
      cin>>arr[z];
   }
   if(n%2==0)
   {
      cout<<"invalid input";
   }
   else
   {
      int r=0;
      for(int i=0; i<n; i++)
      {
         r=r^arr[i];
      }
      cout<<"non repeating element is = "<<r;
   }


	return 0;
}
