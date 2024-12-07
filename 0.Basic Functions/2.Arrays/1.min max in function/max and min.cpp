#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={3,7,4,6,5,2,9};
    int m=max(arr[1],arr[5]);
    cout<<"max = "<<m<<endl;

    int m1=min(arr[1],arr[5]);
    cout<<"min = "<<m1;

    return 0;
}
