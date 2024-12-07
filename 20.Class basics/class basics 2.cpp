#include<iostream>
using namespace std;


class student
{
   string name;
public:
   int age;
   // parameterised constructor
   student (string s,int a)
   {
      name=s;
      age=a;
   }
   // deparameterised constructor / DEFAULT CONSTRUCTOR

   student ()
   {
      cout<<"default"<<endl;
   }

   //copy constructor

   student(student &a)
   {
      name=a.name;
      age=a.age;
   }

   void getname()
   {
      cout<<name;
      cout<<age;
      cout<<endl;
   }

   ~student()
   {
      cout<<"del";
   }
};


int main()
{
   student n("us",20); /// para constructor
   n.getname();

   student b;   /// default constructor


   student c;

   student d=n;  /// depara constructor







	return 0;
}
