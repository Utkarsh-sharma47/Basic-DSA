#include<iostream>
using namespace std;

int facto(int x)
{
    int ans=1;
    for(int i=1;i<=x;i++)
    {
        ans=ans*i;
    }
    return ans;
}


int main()
{
    int n,r,k;
    cout<<"enter n ";
    cin>>n;
    cout<<"enter r ";
    cin>>r;

    k=(facto(n))/((facto(n-r))*(facto(r)));
    cout<< k;

    return 0;
}
