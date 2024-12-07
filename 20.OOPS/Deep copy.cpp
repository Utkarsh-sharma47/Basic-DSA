#include<iostream>
using namespace std;


class Student {
public:
   string name;
   double *gpaptr;

   Student(string name, double gpa)
   {
      this->name=name;
      gpaptr=new double;
      *gpaptr=gpa;
   }

   // make a copy constructor
   Student(Student &obj)
   {
      this->name=obj.name;
      gpaptr=new double;
      *gpaptr=*obj.gpaptr;
   }

   void print()
   {
      cout<<name<<endl<<*gpaptr<<endl;
   }
};



int main()
{
   Student obj1("US",8.9);
   Student obj2(obj1);

   *obj2.gpaptr=9.2;

   obj1.print();
   obj2.print();


	return 0;
}
