#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// method-1

void rem(string s)
{
   if(s.size()==0) /// break case
   {
      return;
   }
   if(s[0]==s[1])
   {
      rem(s.substr(1));
   }
   else
   {
      cout<<s[0];
      rem(s.substr(1));
   }
}

/*
string rem(string s)
{

}
*/
int main()
{
   string s;
   cout<<"enter a string: ";  cin>>s;
   sort(s.begin(),s.end());
   rem(s);


	return 0;
}
