#include<iostream>
#include<algorithm>


using namespace std;


int main()
{

  int n;
  cout<<"n = "; cin>>n;
  int arr[n];
  int len = sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<n; i++)
  {
     cout<<"enter element no "<<i+1<<" = ";
     cin>>arr[i];
  }

  std::sort(arr,arr+len);
  int max_area=0,sum=0,bars=1;
  for(int j=n-1; j>0; j--)
  {
     sum=arr[j]*bars;
     bars++;
     if(sum>max_area)
     {
        max_area=sum;
     }
  }
  cout<<max_area;


	return 0;
}
