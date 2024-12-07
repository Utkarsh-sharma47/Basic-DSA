#include<iostream>
using namespace std;

class studentinfo
{
   // use public to access the variables globally
   int roll;
   public:
      string n;
      int a;

   // function to use a private variable globally
   void setname(int r)
   {
      roll=r;
   }

   // function to get name (pvt varable globally

   void getname()
   {
      cout<<roll;
   }




   /* function for printing the class  */
      void printInfo()
      {
         cout<<roll;
         cout<<n;
         cout<<a;
      }

};

int main()
{
   int n;
   cout<<"no of students info = "; cin>> n;
   studentinfo arr[n]; /* creating array to store class elements */

   for(int i=0;i<n;i++)
   {
      int r;
      cout<<"enter roll = ";  cin>>r;
      arr[i].setname(r);
      cout<<"enter name = ";  cin>>arr[i].n;
      cout<<"enter age = ";  cin>>arr[i].a;
   }


   //outputof classs by calling a pre defined function
   for(int i=0;i<n;i++)
   {
      arr[i].printInfo();
      cout<<endl;
   }
   cout<<endl;

/* normal cout method not working for private variable of class   */





	return 0;
}
