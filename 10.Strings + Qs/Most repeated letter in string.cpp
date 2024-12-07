#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
   string s;
   cout<<"enter a string: "; cin>>s;

// first sorting the string
   sort(s.begin(),s.end());
   cout<<endl<<s;

   int c,m;
   c=1;
   m=1;
   for(int i=0;i<=s.size();i++)
   {
      if(s[i+1]==s[i])
      {
         c=c+1;
         if(c>m)
         {
            m=c;
         }
      }
      else
      {
         c=1;
      }
   }
   cout<<endl<<"most repeated = "<<m;



	return 0;
}
