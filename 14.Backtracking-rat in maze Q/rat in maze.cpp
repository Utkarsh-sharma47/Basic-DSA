#include<iostream>
using namespace std;

bool step(int** arr, int n, int x, int y)
{
   if(x<n, y<n, arr[x][y]==1)
   {
      return true;
   }
   return false;
}


bool maze(int** arr, int n, int x, int y, int** solarr)
{
   if(x==(n-1) && y==(n-1))
   {
      solarr[x][y]=true;
      return true;
   }

   if(step(arr,n,x,y))
   {
      solarr[x][y]=1;
      if(maze(arr,n,x+1,y,solarr))
      {
         return true;
      }
      if(maze(arr,n,x,y+1,solarr))
      {
         return true;
      }
      solarr[x][y]==0;
      return false;
   }
   return false;
}



int main()
{
   int n;
   cout<<"enter row/column for maze = ";
   cin>>n;

   // creating 2d input array:maze
   int** arr=new int*[n];
   for(int i=0; i<n; i++)
   {
      arr[i]=new int[n];
   }
   // input of 2d array
   for(int i=0; i<n; i++)
   {
      for(int j=0; j<n; j++)
      {
         cin>>arr[i][j];
      }
      cout<<endl;
   }

   // creating solution array
   int** solarr=new int*[n];
 // copying solarr=inarr
   for(int i=0; i<n; i++)
   {
      solarr[i]=new int[n];
      for(int j=0; j<n; j++)
      {
         solarr[i][j]=0;
      }
   }


// output soltuiton array if maze is true

if(maze(arr,n,0,0,solarr))
{
      for(int i=0; i<n; i++)
      {
         for(int j=0; j<n; j++)
         {
            cout<<solarr[i][j];
         }
         cout<<endl;
}     }



	return 0;
}
