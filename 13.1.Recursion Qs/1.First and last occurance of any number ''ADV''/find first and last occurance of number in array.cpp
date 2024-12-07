#include<iostream>
using namespace std;

int firstindex(int arr[], int n, int t, int f)     // (arr+1) skips the FIRST term of array
{                                           /** here we are using one more variable to keep the count for index 'i' */
   if(arr[f]==t)
   {
      return f;
   }
   return (firstindex(arr,n,t,(f+1)));
}

int lastindex(int arr[], int n, int t, int l)    // (arr-1) skips the LAST term of array
{

   if(arr[l]==t)
   {
      return l;
   }
   return (lastindex(arr,n,t,(l-1)));
}


int main()
{
   int n;
   cout<<"enter no. of elements of array = ";   cin>>n;

   int arr[n];
   for(int z=0; z<n; z++)
   {
      cout<<"enter element no "<<z<<" = ";
      cin>>arr[z];
   }

   int t;
   int f=0;
   int l=(n-1);
   cout<<"enter target numb = "; cin>>t;

   cout<<"first index is: "<<firstindex(arr,n,t,f)<<" and last index is: "<<lastindex(arr,n,t,l)<<".";





	return 0;
}
