#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of rows ";
    cin>> n ;

    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(j==1)
            {
                cout<< "1 ";

                for(int k=2;k<=i;k++)
                {
                    if(k<=i)
                    {
                        cout<<k<<"   ";
                    }
                    else
                    {
                        cout<< "  ";

                    }
                }
            }
            else if (j<=i && j!=1)
            {
                cout<< j<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }



    return 0;
}
