#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter number of rows/columns = ";
	cin>>n;

	int tarr[n][n];

//input 2d array
	for(int r=0;r<n;r++)
   {
      for(int c=0;c<n;c++)
      {
         cout<<"enter "<<(r+1)<<"th row "<<(c+1)<<" element = ";
         cin>>tarr[r][c];
      }
   }

//transpose

   int temp;
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
          if(i==j)
          {
             continue;
          }
          else
          {
          temp=tarr[j][i];
          tarr[j][i]=tarr[i][j];
          tarr[i][j]=temp;
          }
       }
   }




//output of 2d array
   for(int r=0;r<n;r++)
   {
      for(int c=0;c<n;c++)
      {
         cout<<tarr[r][c]<<" ";
      }
      cout<<endl;
   }

	return 0;
}
