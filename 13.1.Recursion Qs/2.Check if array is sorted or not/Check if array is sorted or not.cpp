#include<iostream>
using namespace std;

bool check(int arr[], int n)
{
   if(n==1)
   {
      return true;
   }
   bool restarr=check(arr+1,n-1);      //[ (arr+1), now array starts from 1 plus index (ie 1), instead of zero ]
   if(arr[0]<arr[1] && restarr)        ///checks if rest of the array is sorted for not
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{
   int n;
   cout<<"enter no of elements = "; cin>>n;
   int arr[n];
   for(int z=0; z<n; z++)
   {
      cout<<"enter element no "<<(z+1)<<" = ";
      cin>>arr[z];
   }

   cout<<check(arr,n);




	return 0;
}
