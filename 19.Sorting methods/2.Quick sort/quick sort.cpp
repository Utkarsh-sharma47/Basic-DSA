#include<iostream>
using namespace std;

int partition(int arr[],int l,int r)
{
   int p=arr[r];
   int i=l-1;

   for(int j=l; j<=r-1; j++)
   {
      if(arr[j]<p)
      {
         i++;
         ///swap ith and jth element
         int t=arr[i];
         arr[i]=arr[j];
         arr[j]=t;
      }
   }
   /// swap i+1 element and r
   int z=arr[i+1];
   arr[i+1]=arr[r];
   arr[r]=z;

   return i+1;
}

void qs(int arr[],int l,int r)
{
   if(l<r)
   {
      int p=partition(arr,l,r);
      qs(arr,l,p-1);
      qs(arr,p+1,r); /// we dont include pivot
   }
   else{
      return;
   }

}

int main()
{
   int n;
   cout<<"enter no of elements of array, n= ";  cin>>n;

   int arr[n];
   for(int i=0; i<n; i++)
   {
      cout<<"enter element no "<<i+1<<" = ";
      cin>>arr[i];
   }

   qs(arr,0,n-1);

   for(int i=0; i<n; i++)
   {
      cout<<arr[i]<<" ";
   }




	return 0;
}
