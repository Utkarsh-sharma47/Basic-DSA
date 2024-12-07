#include<iostream>
using namespace std;

int main()
{
   // Making 2D array in heap
   int row,col;
   cout<<"enter no of row = ";   cin>>row;
   cout<<"enter no of col = ";   cin>>col;

   int** tarr=new int* [row];

   for(int i=0; i<row; i++)
   {
      tarr[i]=new int[col];
   }

	// taking input in 2d array

	for(int i=0; i<row; i++)
   {
      for(int j=0; j<col; j++)
      {
         cout<<"enter element no "<<j+1<<" of "<<i+1<<" row = ";
         cin>>tarr[i][j];
      }
   }

   //output of array
   for(int i=0; i<row; i++)
   {
      for(int j=0; j<col; j++)
      {

         cout<<tarr[i][j]<<" ";
      }
      cout<<endl;
   }



/* since tera kaam khatam ho gaya ,,now delete this 2d array */

   // deleting 2d array

   for(int k=0; k<row; k++)
   {
      delete []tarr[col]; /** deleting sub array of "int *"          */
   }
   delete []tarr;  /// deleting the main int* array

	return 0;
}
