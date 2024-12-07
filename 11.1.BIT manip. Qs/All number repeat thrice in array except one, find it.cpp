#include<iostream>
using namespace std;

int getbit(int n, int i)
{
   if(((n&(1<<i))!=0)){
  return 1 ;
   }
}


int setbit(int n, int i)
{
   return (n|(1<<i));
}

int main()
{
   int n;
   cout<<"enter no of elements of array = "; cin>>n;
   int arr[n];
   for(int z=0; z<n; z++)
   {
      cout<<"enter element no "<<(z+1)<<" = ";
      cin>>arr[z];
   }
   int r=0;

   for(int i=0; i<64; i++) // since there are 64 bits so i=0 to 64
   {
      int c=0;
      for(int j=0; j<n; j++)
      {
         if(getbit(arr[j],i)==1)
         {
            c++;
         }
      }
      if(c%3!=0)
      {
         r=setbit(r,i);
      }
   }
   cout<<r;


	return 0;
}
