#include<iostream>
using namespace std;


class Teacher{
private:
   int salary;

public:
   string name;
   string dept;
   string sub;

   Teacher () // non para constructor
   {
      cout<<"non para  const called"<<endl;
      salary=2500;
      name="us";
      dept="Staff";
      sub="evs";
   }

   Teacher(int salary, string name,string dept, string sub) //para constructor
   /* using this(->)function  */
   {
      cout<<"para const called"<<endl;
      this->salary=salary;
      this->name=name;
      this->dept=dept;
      this->sub=sub;
   }

   // self made copy constructor
   Teacher ( Teacher &obj)  /** pass by reference */
   {
      this->salary=obj.salary;
      this->name=obj.name;
      this->dept=obj.dept;
      this->sub=obj.sub;

   }
   void changedept(string newdept) ///change dept
   {
      dept=newdept;
   }

   void toprint()    ///to print
   {
      cout<<salary<<endl<<name<<endl<<dept<<endl<<sub<<endl;
   }



};


int main()
{
   Teacher obj1;/// non para
   Teacher obj2(1000,"Ram","HODMM","Maths"); ///para constructor
   Teacher obj3(obj1);  /// default copy constructor

   obj3.toprint();




	return 0;
}
