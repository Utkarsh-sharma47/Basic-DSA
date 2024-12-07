#include<iostream>
using namespace std;

int fac(int n)
{
   if(n==1)
   {
      return 1;
   }
   int pm=fac(n-1);
   return (n*pm);
}

int main()
{
   int n;
   cout<<"enter no = "; cin>>n;
   cout<<"answer = "<<fac(n);


	return 0;
}
