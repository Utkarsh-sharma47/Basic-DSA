#include<iostream>
using namespace std;

void revstr(string s)
{
   if(s.size()==0)
   {
      return;
   }

   string i=s.substr(1);
   revstr(i);
   cout<<s[0];
}

int main()
{
   string s;
   cout<<"enter your string: ";  cin>>s;
   revstr(s);



	return 0;
}
