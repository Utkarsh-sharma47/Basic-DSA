#include<iostream>
using namespace std;


int getbit(int n, int i)
{
   if(((n&(1<<i))!=0))
   {
      return 1 ;
   }
}
int posofsetbit(int n)
{
   int i=0;
   while(1)
   {
      if(getbit(n,i)==1)
      {
         return i;
      }
      else{
         i=i+1;
      }
   }
}

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
   if(n%2!=0)
   {
      cout<<"invalid input";
   }
   else
   {
      int r=0;
      for(int i=0; i<n; i++)
      {
         r=r^arr[i];
      }                        /* here we get r=a^b */
      cout<<"xorsum is "<<r;

      int r1=r;
      int i=posofsetbit(r);
      int j;

      for(j=0; j<n; j++)
      {
         if(getbit(arr[j],i)==1)
         {
            r1=r1^arr[j];
         }
      }
      cout<<endl<<r1<<" and "<<(r^r1);


   }
      // time complexity (K*n) {K=constant}



	return 0;
}
