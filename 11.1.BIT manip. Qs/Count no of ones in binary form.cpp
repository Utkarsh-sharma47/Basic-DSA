#include<iostream>
using namespace std;


int main()
{
   int n;
   cout<<"enter no. = ";cin>>n;

   int c=0;

   while(n!=0)
   {
      n=n&(n-1);
      c=c+1;
   }

   cout<<c;


	return 0;
}
