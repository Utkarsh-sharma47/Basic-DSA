#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n1,n2;
   cout<<"enter n1 = "; cin>>n1;
	cout<<"enter n2 = "; cin>>n2;

	for(int i=n1; i<=n2; i++)
   {
      bool b=1;
      int s=sqrt(i);
      for(int j=2; j<=s; j++)
      {
         if(i%j==0)
         {
            b=0;
         }
      }
      if(b==1)
      {
         cout<<i<<" ";
      }
   }

	return 0;
}
