#include<iostream>
#include<stack>
using namespace std;


void rev_sent(string s)
{
    stack<string> st;

    for(int i=0; i<s.length(); i++)
    {
       string word="";
       while(s[i]!=' ' && i<s.length())
       {
          word=word+s[i];
          i++;/// space ko neglect karega
       }
       st.push(word);/// we have created a reverse stack
    }
    while(!st.empty())
    {
       cout<<st.top()<<" ";
       st.pop();/// so that top wala hate and next word ka chance aaye
    }
    return;
}


int main()
{
   // Input sentence with spaces
   string s;
   getline(cin,s);

   rev_sent(s);


	return 0;
}
