#include<iostream>
using namespace std;

// fuction to check is square is safe or not
bool safe(int** arr, int n, int x, int y)
{
   ///checking back up diagonal
   int r=x,c=y;
   while(r>=0 && c>=0)
   {
      if(arr[r][c]==1)
      {
         return false;
      }
      r=r-1;
      c=c-1;
   }

   ///checking fwd up diagonal
   r=x;
   c=y;
   while(r>=0 && c<n)
   {
      if(arr[r][c]==1)
      {
         return false;
      }
      r=r-1;
      c=c+1;
   }

   /// checking the the up column
   for(int i=0;i<x;i++)
   {
      if(arr[i][y]==1)
      {
         return false;
      }
   }

   return true;

}

bool place(int** arr, int n, int x)
{
   if(x>=n)
   {
      return true;
   }
   for(int col=0; col<n; col+1)
   {
      if(safe(arr,n,x+1,col)==true)
      {
         arr[x][col]=1;
         if(place(arr,n,x+1)==true)
         {
            return true;
         }
      }
      arr[x][col]=0;
   }

   return false;
}

int main()
{
   // input dimension for chess board
   int n;
   cout<<"enter n = ";  cin>>n;

   // making chess board array with all zeros with DMA
   int** arr= new int*[n];
   for(int i=0; i<n; i++)
   {
      arr[i]=new int[n];
      for(int j=0; j<n; j++)
      {
         arr[i][j]=0;
      }
   }

   //output of chess board array if placeing is sucess



   for(int i=0; i<n; i++)
   {
      for(int j=0; j<n; j++)
      {
        if(place(arr,n,0))
        {
           cout<<"Q";
        }
        else
        {
           cout<<" . ";
        }


      }
      cout<<endl;
   }



   cout<<"no solution";


	return 0;
}
