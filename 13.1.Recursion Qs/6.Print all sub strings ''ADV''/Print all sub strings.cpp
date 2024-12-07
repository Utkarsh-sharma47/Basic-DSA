#include<iostream>                // COMLEX CODE
#include<string>
using namespace std;

void ss(string s, string ans)
{
   if(s.size()==0)
   {
      cout<<ans<<endl;
      return ;
   }
   char ch=s[0];                 ///we are are starting from  "" and adding an element and blank till be actually make all the sub string cases
   ss(s.substr(1),ans);          /** here we are doing recuring twice [[1. to add element;;;2. to add blank space]] */
   ss(s.substr(1),ans+ch);
}

int main()
{
   string s;
   cout<<"enter string: ";
   cin>>s;
   ss(s,"");


 return 0;
}
