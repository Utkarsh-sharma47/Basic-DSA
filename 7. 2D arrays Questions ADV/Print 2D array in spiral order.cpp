#include<iostream>
using namespace std;

/*
   testing
*/

int main()
{
	int R,C;
	cout<<"enter number of rows = ";
	cin>>R;
	cout<<"enter number of columns = ";
	cin>>C;
	int tarr[R][C];
//input 2d array
	for(int r=0;r<R;r++)
   {
      for(int c=0;c<C;c++)
      {
         cout<<"enter "<<(r+1)<<"th row "<<(c+1)<<" element = ";
         cin>>tarr[r][c];
      }
   }

   // spiral pattern
   int rs=0,cs=0,re=R-1,ce=C-1;
   while(rs<=re && cs<=ce)
   {
      for(int row=cs;row<=ce;row++)
      {
         cout<<tarr[rs][row]<<" ";
      }
      rs=rs++;

      for(int col=rs;col<=re;col++)
      {
         cout<<tarr[col][ce]<<" ";
      }
      ce=ce--;
   //we need to add condition if row more than columns  or opposite.
      for(int rowe=ce;rowe>=cs;rowe--)
      {
         cout<<tarr[re][rowe]<<" ";
      }
      re=re--;
      for(int cole=re;cole>=rs;cole--)
      {
         cout<<tarr[cole][cs]<<" ";
      }
      cs=cs++;

   }

   cout<<endl;
/*
//output of 2d array
   for(int r=0;r<R;r++)
   {
      for(int c=0;c<C;c++)
      {
         cout<<tarr[r][c]<<" ";
      }
      cout<<endl;
   }
*/
	return 0;
}
