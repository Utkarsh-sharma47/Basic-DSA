#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,r,ans;
    ans=0;
    r=0;
    cout<<"enter n ";
    cin>>n;
    for(int i=1;n>0;i=i*2)
    {
        r=n%10;
        ans=(r*i)+ans;
        n=n/10;
    }
    cout<<ans;

    return 0;
}
