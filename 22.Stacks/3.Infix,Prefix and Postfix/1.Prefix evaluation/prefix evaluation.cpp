#include<iostream>
#include<string>
#include<stack>
#include<cmath>
#include <bits/stdc++.h>
// eg: -+7*45+2 0  answer:25
using namespace std;


int prefix_eval(string s,int l)
{
   stack<int> st;
   int c=l-1;
   while(c>=0)
   {
      if(s[c]>='0' && s[c]<='9' )
      {
         st.push(s[c]-'0');// converting char into integer
      }
      else if(s[c]==' ')
      {
         goto jump;
      }
      else
      {
         int o1=st.top();
         st.pop();
         int o2=st.top();
         st.pop();

         switch(s[c])
         {
         case '+':
            st.push(o1+o2);
            break;
         case '-':
            st.push(o1-o2);
            break;
         case '*':
            st.push(o1*o2);
            break;
         case '/':
            st.push(o1/o2);
            break;
         case '%':
            st.push(o1%o2);
            break;
         case '^':
            st.push(pow(o1,o2));
            break;
         default:
            cout<<"invalid operation";
            break;
            return -1;

         }
      }
      jump:c--;
   }
   return st.top();
}



int main()
{
  string exp;
  cout<<"enter you expression: ";
  getline(cin,exp);/** this is how you input string */
// length of input string
  int l=exp.length();
  cout<<prefix_eval(exp,l);



	return 0;
}
