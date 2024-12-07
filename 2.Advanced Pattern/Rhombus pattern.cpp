#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of rows ";
    cin>> n ;

    for(int i=(2*n-1);i>=(n+1);i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(j<=(i-n))
            {
                cout<< "  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<< endl;
    }






        return 0;
}
