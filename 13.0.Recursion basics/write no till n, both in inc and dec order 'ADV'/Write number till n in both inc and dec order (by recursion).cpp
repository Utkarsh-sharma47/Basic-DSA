#include<iostream>
using namespace std;

int dec(int n)
{
   if(n==0)
   {
      return 0;
   }
   cout<<n;
   dec(n-1);
}

void inc(int n)
{

   if(n==0)
   {
      cout<<"0";
      return ;
   }
   inc(n-1);
   cout<<n;

}

int main()
{
   int n;
   cout<<"enter any number = ";    cin>>n;
   cout<< dec(n)<<endl;

   inc(n);                    // calling out VOID function {{use just the name}}


	return 0;
}
