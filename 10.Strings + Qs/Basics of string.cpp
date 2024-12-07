#include<iostream>
#include<string>
using namespace std;

int main()
{
/*
// M-1 (without space string)
    cout<<"# M-1"<<endl;
    string s1 ="hello";
    cout<<s1<<endl;
/*
// M-2 (input with spaces)
   cout<<"# M-2 enter string with spaces : "    ;
   string s2;
   getline(cin,s2);
   cout<<s2<<endl;
*/

// Appending 2 strings
   string str1,str2;
   str1="utkarsh ";
   str2="sharma";
   cout<<str1+str2<<endl;
   str1.append(str2);
   cout<<"by append function: "<<str1<<endl;

// Strings as array
   string m1="world";
   cout<<"element second(third) of world: "<<m1[2];

/



   cout<<endl;
   return 0;
}

