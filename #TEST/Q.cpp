#include<iostream>
#include<cmath>
using namespace std;



int main()
{
   int n=54673745;
   int k=1;
   int sum=0;
   int d=pow(10,1);
   int l=n%d;
   cout<<l;
   while(k<=8)
   {
      int d=pow(10,k);
      int r=n%d;
      n=n/d;
      if(k%2!=0)
      {
         sum=sum+r;
      }

      k++;
   }
   cout<<sum;
}
