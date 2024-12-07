#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }

	    int max=*max_element(arr,arr+n);
	    cout<<"max"<<max<<endl;
	    int carr[max+1]={0};

	    for(int i=0; i<n; i++)
	    {
          carr[arr[i]]++ ;
	    }
	    cout<<n-*max_element(carr,carr+(max+1))<<endl;


	return 0;
}
