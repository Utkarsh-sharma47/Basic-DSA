#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
/**
   string s="123456789";
   sort(s.begin(), s.end(),greater<int>());
   cout<<"max no. in string = "<<s[0];
*/

   int n,N;
   cout<<"n = ";
   cin>>n;
   N=n;
   int t,m;
   m=0;
   //max num count
   while(true)
   {
      t=n%10;
      n=n/10;
      if(n==0)
      {
         break;
      }

      if(t>m)
      {
         m=t;
      }
   }

   cout<<"max num = "<<m<<endl;

   //counting num of times 'm' is repeated
   int i,c=0;
   while(true)
   {
      i=N%10;
      N=N/10;

      if(N==0)
      {
         break;
      }

      if(i==m)
      {
         c=c+1;
      }
   }
   cout<<"occurances = "<<c;



	return 0;
}
