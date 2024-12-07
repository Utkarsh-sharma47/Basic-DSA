#include<iostream>
using namespace std;


// MERGE function
/// p1, p2 pointer mai jiska element kam hai usko aage bada do

void mer(int arr[], int l, int mid, int r)/* yaha int** arr nhi hai since int** wala is original ,, SILLY MISTAKE CHANCE*/
{
   int n1=mid-l+1;
   int n2=r-mid;

   int a[n1];
   int b[n2];
   /** put values in array 'a' and 'b' */
   for(int z=0; z<n1; z++)
   {
      a[z]=arr[l+z];
   }
   for(int z=0; z<n2; z++)
   {
      b[z]=arr[mid+1+z];
   }
   /// loop to merge by pointer
   int p1=0,p2=0,c=l;
   while(p1<n1 && p2<n2)
   {
      if(a[p1]<b[p2])
      {
         arr[c]=a[p1];
         p1=p1+1;
         c=c+1;
      }
      else
      {
         arr[c]=b[p2];
         p2=p2+1;
         c=c+1;
      }
   }
   /// extreme case of pointer
   while(p1<n1)
   {
      arr[c]=a[p1];
      p1=p1+1;
      c=c+1;
   }

   while(p2<n2)
   {
      arr[c]=b[p2];
      p2=p2+1;
      c=c+1;
   }

}


//merge SORT function
void ms(int arr[], int l, int r)
{
   if(l<r)
   {
      int mid=(l+r)/2;
      ms(arr, l, mid);
      ms(arr, mid+1, r);
      mer(arr,l,mid,r);
   }

}



int main()
{
   int n;
   cout<<"Size of array, n = "; cin>>n;
   int* arr=new int[n];
   for(int i=0; i<n; i++)
   {
      cout<<"element no. "<<i+1<<" = ";
      cin>>arr[i];
   }

   ms(arr,0,n-1);


   for(int k=0; k<n; k++)
   {
      cout<<arr[k]<<" ";
   }

	return 0;
}
