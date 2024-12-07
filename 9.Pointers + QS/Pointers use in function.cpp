#include<iostream>
using namespace std;

void swap(int a,int b)
{
   int t=a;
   a=b;
   b=t;
}
void swapptr(int *a,int *b)         ///yaha pr mene address se number swap kiye hai toh swap ho gae withoout even returning anything
{
   int t=*a;
   *a=*b;
   *b=t;
}

int main()
{
   int a=2,b=4;
// using normal numbers
   swap(a,b);
   cout<<"a = "<<a<<"   "<<"b = "<<b<<endl;

//using pointer
   int *ap=&a,*bp=&b;
   cout<<endl<<"now using pointers"<<endl;
   swapptr(&a,&b);
   cout<<"a = "<<a<<"   "<<"b = "<<b;



	return 0;
}
