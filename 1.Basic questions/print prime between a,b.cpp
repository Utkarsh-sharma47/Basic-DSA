#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter lower range a= ";
    cin>>a;
    cout<<"enter upper range b= ";
    cin>>b;
    if(a==b)
    {
        cout<<"enter different values";
    }
    else{
    int i,n;
    for(i=a+1;i<b;i++)
    {
        for(n=2;n<i;n++)
        {
            if(i%n==0)
            {
                break;
            }

        }
        if(i==n){
        cout<<n<<", ";
        }
    }
    cout<<"are prime between "<<a<<" and "<<b;
    }
    return 0;
}
