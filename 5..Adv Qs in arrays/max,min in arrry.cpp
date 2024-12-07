#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    cout<<"enter no. of values to be stroed ";
    cin>>n;
    int array[n];                                   //array is name of actual array
                                                    // (data type)  (name of array)[number of elements]
    for(int i=0;i<n;i++)
    {
       cout<<"enter element no "<<i+1<<" = ";
        cin>> array[i];
    }

    for(int i=0;i<n;i++)
    {
        a=max(a,array[i]);
        b=min(b,array[i]);
    }

    cout<<a<<" max  "<<endl;
    cout<<b<<" min ";


    return 0;
}
