#include<iostream>
using namespace std;
// single and multi inheritance

class


class a{
public:
   int n=9;
   string s;
   void funct()
   {
      cout<<"function of class a"<<endl;
   }
   void printa()
   {
      cout<<n;
      cout<<s;
   }
};

class b:public a:public i{
public:
   void bfunct()
   {
      cout<<"function of b";
   }


};

class c:public b{ /* taking attributes of class a */
public:

};


int main()
{
   int n;
   cin>>n;
   a A;

   b x;        // single inheritance
   x.funct();

   c f;        // multi inheri
   f.bfunct();
   f.funct();






	return 0;
}
