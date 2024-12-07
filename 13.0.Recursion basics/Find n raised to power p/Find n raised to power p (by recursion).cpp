#include<iostream>
using namespace std;

int pow(int n, int p)
{
   if(p==0)
   {
      return 1;
   }
   int prevpow=pow(n,(p-1));
   return (n*(prevpow));
}

int main()
{
   int n,p;
   cout<<"enter a number = "; cin>> n;
   cout<<"enter a power for n, p= "; cin>>p;

   cout<<"answer = "<<pow(n,p);


	return 0;
}
