#include<iostream>
using namespace std;

void addbyrefvar(int &n) /// '&' use karne se hi 'i' ka address aaya hai 'n' mai and function mai gya and actual value is changed
{                       // use "&" and globally access a variale in function
   n++;
   return;
}

void addbyptr(int *m)
{
   *m=*m+1;
   return;
}


int main()
{
   // REF. VARIABLE

   int i=5;
   int &j=i;

   // pointer
   int *k;
   k=&i;
/**
   cout<<"i+1 = "<<i+1<<" and j = "<<j<<" changes in 'i' caused change in j"<<endl;
   i++;
   cout<<i<<" , j= "<<j<<endl;
*/
   // USING 'i' AS GLOBAL VARIABLE IN FUNTION USING ITS REF. VARIABLE
/**
   addbyrefvar(i);
   cout<<"i = "<<i<<" using just var"<<endl;
   addbyrefvar(j);
   cout<<"i = "<<i<<" using ref. var"<<endl;
*/

   addbyrefvar(i);
   cout<<i<<" success by ref var"<<endl;

   addbyptr(&i); /* '&i' and 'k' would work same */
   cout<<i<<" success by ptr"<<endl;




	return 0;
}
