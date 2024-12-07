#include<iostream>
using namespace std;

int main()
{
// Using HEAP memory BY - "new" keyword
   new int ;  ///this creates a integer in HEAP ,, return address,, you cant name it
   int *i=new int;/// since it return address, we make to pointer for it,, this pointer is created in stack
   *i=5;
   cout<< *i<<endl;

   new int ;
   int *j=new int;
   *j=4;
   cout<< *j<<endl;

// Making array of variable size (using heap memory)

   int n;
   cout<<"n= "; cin>>n;
   int *arr= new int[n];

   ///taking inputs of array

   for(int i=0; i<n; i++)
   {
      cout<<"enter element no "<<i+1<<" = ";
      cin>>arr[i];
   }
// Deleting

   delete []arr;





return 0;
}



