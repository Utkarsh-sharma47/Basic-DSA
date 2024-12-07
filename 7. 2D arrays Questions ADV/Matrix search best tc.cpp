#include<iostream>
using namespace std;

int main()
{
	int R,C;
	cout<<"enter number of rows = ";
	cin>>R;
	cout<<"enter number of columns = ";
	cin>>C;
	cout<< endl;
	int tarr[R][C];
//input 2d array
	for(int r=0;r<R;r++)
   {
      for(int c=0;c<C;c++)
      {
         cout<<"enter "<<(r+1)<<"th row "<<(c+1)<<" element = ";
         cin>>tarr[r][c];
      }
      cout<<endl;
   }

   int f;
   cout<<endl<<"enter no you want to find = ";
   cin>>f;
// searching by LADDER method

   int i=0,j=(C-1);
   bool found=false;
   while(i<=(R-1) && j>=0)
   {
      if(tarr[i][j]==f)                                                     ///operating variables i=rows and j=columns and curr = element u r checking
      {
         cout<<"number is at "<<(i+1)<<"th row "<<(j+1) <<" element"<<endl;
         found=true;
         break;
      }
      else if(tarr[i][j]<f)
      {
         i++;         /** if curr small then go DOWN **/
      }
      else if(tarr[i][j]>f)
      {
         j--;         /** if curr less than finding number - GO DOWN **/
      }
   }
   if(found==false)
   {
      cout<<"number do not exists"<<endl;
   }



	return 0;
}

