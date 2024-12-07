#include<iostream>
#include<cmath>
using namespace std;


int nobd(int x)
{
    int i;
    for(i=0;x>0;i++)
    {
        x=x/2;
    }
    return i;
}




int main()
{
    int n,ans,r,f,i;
    cout<<"enter number = ";
    cin>>n;

   while(n>0)
   {
       r=n%2;
       cout<<r;
       n=n/2;
   }

    return 0;
}
