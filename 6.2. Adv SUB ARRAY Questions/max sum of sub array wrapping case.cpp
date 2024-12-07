#include<iostream>
#include<climits>

using namespace std;

// kadane's algorithm gives maximum sum in array
int kadane(int arr[],int n)
{
   int s=0;
   int a=INT_MIN;
   for(int i=0;i<n;i++)
   {
      s=arr[i]+s;
      if(s<0)
      {
         s=0;
      }
      if(s>a)
      {
         a=s;
      }

   }
   return a;
}

int main()
{
	int n;
	cout<<"enter number = ";
	cin>>n;
	int inarr[n];

	for(int z=0;z<n;z++)
	{
		cout<<"enter element no "<<(z+1)<<" = ";
		cin>>inarr[z];
	}

	int maxnonwrapsum=kadane(inarr,n);

	//sum of array

	int soa=0;
	for(int k=0;k<n;k++)
   {
      soa=inarr[k]+soa;
   }

	//turning array sign opposite
	int ivtarr[n];
	for(int y=0;y<n;y++)
   {
      ivtarr[y]=-inarr[y];
   }
   //max sum of sign inverted array

   int maxsumofsigninvarr=kadane(ivtarr,n);
   //max sum of wrapping array
   int maxwrapsum=soa+maxsumofsigninvarr;

   if (maxwrapsum>maxnonwrapsum)
   {
      cout<<maxwrapsum;
   }
   else
   {
      cout<<maxnonwrapsum;
   }





	return 0;
}
