#include<iostream>
#include<climits>
using namespace std;

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
	//converting in cum sum array
	int cumsumarr[n+1];
	cumsumarr[0]=0;

	for(int y=1;y<n;y++)
   {
      cumsumarr[y]=cumsumarr[y-1]+inarr[y-1];
   }
   int maxsum = INT_MIN;

	for(int i=1;i<=n;i++)
   {
      int sum=0;
      for(int j=0;j<i;j++)
      {
         sum=cumsumarr[i]-cumsumarr[j];
         maxsum=max(sum,maxsum);

      }
   }
   cout<<maxsum;




	return 0;
}
