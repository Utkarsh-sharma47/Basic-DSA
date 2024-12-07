#include<iostream>
using namespace std;


int cnol(char arr[])
{
   int n,i=0;
   while(arr[i]!='\0')
   {
      i=i++;
   }
   return (i-1);

}

int main()
{
   int n;
   cout<<"no. of letter: ";
   cin>>n;
   char carr[n+1];
   cout<<"enter a word: ";
   cin>> carr;
   bool check=false;
   for(int i=0;i<n;i++)
   {
      if(carr[i]==carr[n-1-i])
      {
         check=true;
         continue;
      }
      else
      {
         check=false;
         break;
      }
   }
   if(check==true)
   {
      cout<<"TRUE";

   }

   else{
      cout<<"FALSE";
   }


   return 0;
}

