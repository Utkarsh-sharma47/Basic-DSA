#include<iostream>
#include<stack>
using namespace std;

// print stack
void print(stack<int> s,int n)
{
   stack<int> sr;
   for(int i=0; i<n; i++)
   {
      cout<<s.top()<<" ";
      s.pop();
   }
   return;
}

 void rev_stack(stack<int> s,int n)
{
   stack<int> sr;
   for(int i=0; i<n; i++)
   {
      int t;
      t=s.top();
      sr.push(t);
      s.pop();
   }
   print(sr,n);
   return ;
}





int main()
{
   stack<int> s;
   int n;
   cout<<"enter number of elements : ";
   cin>>n;

   for(int i=0; i<n; i++)
   {
      int e;
      cout<<"enter element number "<<i+1<<" : ";
      cin>>e;
      s.push(e);
   }
   cout<<"initial : ";
   print(s,n);
   cout<<"after rev: ";
   rev_stack(s,n);


	return 0;
}
