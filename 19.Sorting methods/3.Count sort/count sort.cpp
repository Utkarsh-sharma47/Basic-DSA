#include<iostream>
#include<climits>
using namespace std;

int main()
{
   int n;
   cin>>n;
   ///input array
   int ia[n];
   for(int z=0; z<n;z++)
   {
      cin>>ia[z];
   }

   ///maximum element in array (n1)
   int n1=0;


   for(int i=0; i<n; i++)
   {
      if(ia[i]>n1)
      {
         n1=ia[i];
      }
   }

    ///making count array of size n1
   int ca[n1]={0};
   for(int j=0; j<n; j++)
   {
      ca[ia[j]]++;
   }

   ///making position array
   int pa[n1];
   pa[0]=ca[0];
   for(int i=1; i<=n1; i++)
   {
      pa[i]=pa[i-1]+ca[i];
   }

   /// making answer array
   /* start a pointer from last of input array.
   whatever the number(num1), check that index of position array, it will give u num2
   now dec num2 by 1 and u get final num = index of that num1 in answer array */
   int arr[n];
   for(int i=n-1; i>=0; i--)
   {
       int iaa=pa[ia[i]]-1;
       pa[ia[i]]--;
       arr[iaa]=ia[i];

   }


   ///output of answer array
   for(int z=0;z<n;z++)
   {
      cout<<arr[z];
   }




/*(n+             */



	return 0;
}
