#include<iostream>
using namespace std;

void addone(int *n)
{
   *n=*n+1;
   return;
}

int main()
{
//Creating a pointer of variable 'a'
   cout<<"     #Creating pointer"<<endl;
   int a=10;
   int *aptr;
   aptr=&a;
   cout<<*aptr<<endl;
   cout<<aptr<<endl;
   cout<<&a<<endl;
   cout<<endl;

//Pointer arithemitcs
   cout<<"     #Pointer arithmetics"<<endl;
   aptr++;
   aptr=&a;                ///a pointer mai 'a' ka address (ie value ie 10) daal rahe hai
   cout<<*aptr<<endl;      /* changing pointer value , changes the variable value now */
   *aptr=20;
   cout<<a<<endl;
   cout<<endl;

//Pointer & Arrays
   cout<<"     #Pointer and Arrray"<<endl;
   int arr[]={10,20,30,40};
   cout<<"index pointer: "<<*arr<<endl;
   int *ptr=arr;              /// storing array ka zero element in a pointer
   cout<<*ptr<<endl;
//printing array using pointer
   for(int i=0;i<4;i++)
   {
      cout<<*ptr<<" ";
      ptr++;
   }
   cout<<endl;
// printing array using index pointer
   for(int i=0;i<4;i++)
   {
      cout<<*(arr+i)<<" ";
   }
   cout<<endl<<endl;

//Pointer to pointer
   cout<<"     #Pointer to pointers"<<endl;
   int b=100;
   int *p;
   p=&b;
   cout<<p<<" :cout only p/address of b"<<endl;
   cout<<*p<<" :single *p pointer/value of b"<<endl;

   int **q=&p;              ///giving address of pointer p to pointer q
   cout<<q<<" :address of q"<<endl;
   cout<<*q<<" :single *q pointer/ value of p/ address of b"<<endl;
   cout<<**q<<" :double **q/ value of b"<<endl;

// Pointers in function
   cout<<endl<<"     #Pointers in function"<<endl;
   int c=5;
   int *cptr;
   cptr=&c;

   addone(cptr);
   cout<<"c = "<<c<<" added one in c"<<endl;

	return 0;
}
