#include<iostream>
using namespace std;


class Student{
public:
   string name;
   double gpa;

   void changegpa(double newgpa)
   {
      this->gpa=newgpa;
   }

   Student(string name,double gpa)
   {
      this->name=name;
      this->gpa=gpa;
   }


   void print()
   {
      cout<<name<<endl<<gpa<<endl;
   }
};



int main()
{  Student obj1("US",7);
   Student obj2(obj1);
   obj2.gpa=9.2;        /* we changed obj 1 but thats not copied in obj2 is not changed>> DEEP COPYING   */

   obj1.print();
   obj2.print();



	return 0;
}
