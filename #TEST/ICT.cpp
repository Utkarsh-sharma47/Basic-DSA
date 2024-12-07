#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
   int n,k;
	    cin>>n;
	    vector<int> v;
	    for(int i=0; i<n; i++)
	    {
	        int val;
	        cin>>val;
	        v.push_back(val);
	    }
	    v.erase(v.begin()+1);
	    n--;
	    for(int i=0; i<n; i++)
	    {
	        cout<<v[i];
	    }



	   return 0;
}
/*
           for(int j=i+1; j<n; j++)//distinct element
	        {
	            if(v[i]+v[j]<=k)
	            {
	                //delete the bigger one
	                if(v[i]>v[j])
	                {
	                    v.erase(v.begin()+i);
	                }
	                else
	                {
	                    v.erase(v.begin()+j);
	                }
	                i=-1;
	                n=n-1;
	                j=n;
	            }
	        }
*/

