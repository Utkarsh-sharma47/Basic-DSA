#include<iostream>
using namespace std;

int searchkey(int array[],int n,int k)
{
    for(int i=1;i<=n;i++)
    {
        if(k==array[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,a,b;
    cout<<"enter no. of values to be stored ";
    cin>>n;
    int array[n];


    for(int i=1;i<=n;i++)
    {
        cout<<"element number "<<i<<" = ";
        cin>> array[i];
    }
    cout<<"enter no. you want to find ";
    cin>>a;

    cout<<"at number " <<searchkey(array,n,a);

    return 0;
}
