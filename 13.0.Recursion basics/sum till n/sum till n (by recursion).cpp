#include<iostream>
using namespace std;
                        // understand this by stack, we are calling and returning value within called fucntion,(like inception)
int sum(int n)
{
   if(n==0)
   {
      return 0;
   }
   int prevsum=sum(n-1);
   return (n+prevsum);
}

int main()
{
   int n;
   cout<<"enter n = ";  cin>>n;

   cout<<"sum till n = "<<sum(n);


	return 0;
}
