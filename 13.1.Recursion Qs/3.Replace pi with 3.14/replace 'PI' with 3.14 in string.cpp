#include<iostream>
using namespace std;
// Method -1

void replaceM1(string s)
{
   if(s.size()==0)
   {
      return ;
   }

   if(s[0]=='p' && s[1]=='i')
   {
      cout<<"(3.14)";
      replaceM1(s.substr(2));
   }
   else
   {
      cout<<s[0];
      replaceM1(s.substr(1));
   }
}


// Method-2 (NOT WORKING RN)
/*
string rep(string s, int i)
{
   int size=s.size();
   if(i==(size-1))
   {
      return s;
   }

   if(s.substr(i,2)=="pi")
   {
       s.erase(i,2);
      s.insert(i,"(3.14)");
      rep(s,i+2);
   }
   else{
      rep(s,i+1);
   }

}

*/
int main()
{
   string s;
   cout<<"enter string: "; cin>>s;

   replaceM1(s);
   ///cout<<rep(s,0);





	return 0;
}
