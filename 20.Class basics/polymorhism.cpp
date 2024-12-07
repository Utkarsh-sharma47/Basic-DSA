#include<iostream>
using namespace std;
// functon overloading
class a{
public:
   void fun()
   {
      cout<<"no parameter"<<endl;
   }
   void fun(int i)
   {
      cout<<"int parameter"<<endl;
   }
   void fun(double f)
   {
      cout<<"float parameter"<<endl;
   }

};

// operator overloading

class complex
{
   int real, img; /// constructor to access private variables

public:
   complex(int r, int i)  /// constructor fnuction
};

int main()
{
   a obj;

   obj.fun();
   obj.fun(9);
   obj.fun(4.5);



	return 0;
}
