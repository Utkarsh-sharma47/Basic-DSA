#include<iostream>
using namespace std;

int main()
{

int n,r,c;
n = 6;
for(r=0;r<n;r++)
{
  for(c=0;c<n+1;c++)
     if ((r==0 && c%3!=0) || (r==1 && c%3==0) || (r-c==2) || (r+c==8))
          cout<<(" * ");
        else
          cout<<("  ");

    cout<<("\n");

}
  return 0;
}
