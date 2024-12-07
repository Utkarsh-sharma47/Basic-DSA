#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
// Method -1 (by logic)

   string s="abcdefg";
   for(int i=0;i<s.size();i++)
   {
      if(s[i]>='a' && s[i]<='z')          /** (small letter)-(captial letter)=32 */
      {                                     /*  'a'-'A'=32 */
          s[i]=s[i]-32;
      }

   }
   cout<<endl<<s<<endl;

// Method -2 (by function

   string s1="xyz";
   transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
   cout<<s1<<endl;

	return 0;
}
