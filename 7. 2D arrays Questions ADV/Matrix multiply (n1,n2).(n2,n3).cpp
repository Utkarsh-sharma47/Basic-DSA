#include<iostream>                                                    //   For multiplication in matrix of (r1,c1) and (r2,c2)
                                                                     //          c1=r2 needed true for multiplication
using namespace std;

int main()
{
   //variables define for input of 2 matries
	int r1,c2,cr;
	cout<<"enter number of rows of M1 = ";
	cin>>r1;
	cout<<"enter number of col of M1 or rows of M2 = ";
	cin>>cr;
	cout<<"enter number of columns of matrix 2= ";
	cin>>c2;
	int tarr1[r1][cr];
	int tarr2 [cr][c2];
	int ansarr[r1][c2];
// input of 2 matrices
	for(int r=0;r<r1;r++)
   {
      for(int c=0;c<cr;c++)
      {
         cout<<"enter "<<(r+1)<<"th row "<<(c+1)<<" element of M1 = ";
         cin>>tarr1[r][c];
      }
   }

   for(int r=0;r<cr;r++)
   {
      for(int c=0;c<c2;c++)
      {
         cout<<"enter "<<(r+1)<<"th row "<<(c+1)<<" element of M2 = ";
         cin>>tarr2[r][c];
      }
   }

//multiplication

   for(int i=0;i<r1;i++)
   {
      for(int j=0;j<c2;j++)
      {
          ansarr[i][j]=0;

         for(int k=0;k<cr;k++)
         {
            ansarr[i][j]=((tarr1[i][k])*(tarr2[k][j]))+ansarr[i][j];
         }
      }
   }




//output of 2d array
   for(int r=0;r<r1;r++)
   {
      for(int c=0;c<c2;c++)
      {
         cout<<ansarr[r][c]<<" ";
      }
      cout<<endl;
   }

	return 0;
}
