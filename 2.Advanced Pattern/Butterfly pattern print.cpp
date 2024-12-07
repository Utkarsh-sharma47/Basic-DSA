#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "enter number of rows ";
    cin>> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(2*n);j++)
        {
            if(j<=i || j>(2*n-i))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for(int p=n;p>=1;p--)
    {
        for(int q=1;q<=(2*n);q++)
        {
            if(q<=p || q>(2*n-p))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }

        }
        cout<< endl;
    }


    return 0;
}
