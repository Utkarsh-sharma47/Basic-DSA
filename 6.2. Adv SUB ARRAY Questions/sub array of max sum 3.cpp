#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n;
	cout<<"enter number = ";
	cin>>n;
	int m;
	m=n+1;
	int inarr[n];

	for(int z=0;z<n;z++)
	{
		cout<<"enter element no "<<(z+1)<<" = ";
		cin>>inarr[z];
	}
	int s=0,a=INT_MIN;

	for(int i=0;i<n;i++)
   {
      s=inarr[i]+s;
      if(s<0)
      {
         s=0;
      }
      if(s>a)
      {
         a=s;
      }
   }


   cout<<a;


	return 0;
}
