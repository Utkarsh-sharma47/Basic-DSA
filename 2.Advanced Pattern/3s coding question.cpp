#include<iostream>
#include<cmath>
using namespace std;

void sm(int a, int b, int n)
{
   for(int i=1; i<=n; i++)
   {
      int sum=a;
      for(int j=0; j<=(i-1); j++ )
      {
         sum=sum+(b*pow(2,j));
      }
      cout<<sum<<" ";
   }
   return;
}


int main()
{
   int a,b,n,q;

   cout<<"q = "; cin>>q;

   int mat[q][3];

   for(int i=0; i<q; i++)
   {
      for(int j=0; j<3; j++)
      {
         cin>>mat[i][j];
      }
   }

   for(int k=0; k<q; k++)
   {
      sm(mat[k][0],mat[k][1],mat[k][2]);
      cout<<endl;
   }


	return 0;
}
