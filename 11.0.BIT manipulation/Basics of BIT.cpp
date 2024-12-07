#include<iostream>
using namespace std;

int getbit(int n, int i)
{
   if(((n&(1<<i))!=0)){
  return 1 ;
   }
}

int setbit(int n, int i)
{
   return (n|(1<<i));
}

int clearbit(int n,int i)
{
   int m=~(1<<i);
   return (n&m);
}

int updatebit(int n, int i, int ub)
{
   int m=~(1<<i);
   n=(n&m);

   return (n|(ub<<i));
}



int main()
{

// Get Bit

   int n,i;
   cout<<" GET BIT"<<endl;
   cout<<"enter a number = "; cin>>n; cout<<endl;
   cout<<"enter the postion of bit u want to know i = "; cin>>i;

   if(getbit(n,i)==1)
   {
      cout<<"works";
   }





// Set Bit
/*
   int n,i;
   cout<<" SET BIT"<<endl;
   cout<<"enter a number = "; cin>>n; cout<<endl;
   cout<<"enter the postion of bit u want to set to 1: i = "; cin>>i;

   cout<<setbit(n,i)<<endl;
*/

// Clear Bit
/*
   int n,i;
   cout<<" CLEAR BIT"<<endl;
   cout<<"enter a number = "; cin>>n; cout<<endl;
   cout<<"enter the postion of bit u want to CLEAR to zero: i = "; cin>>i;

   cout<<clearbit(n,i)<<endl;
*/

// Update Bit
/*
   int n,i,ub;
   cout<<" UPDATE BIT"<<endl;
   cout<<"enter a number = "; cin>>n; cout<<endl;
   cout<<"enter the postion of bit u want to know i = "; cin>>i;
   cout<<" updating bit enter 0/1 = "; cin>>ub;

   cout<<updatebit(n,i,ub);
*/

	return 0;
}
