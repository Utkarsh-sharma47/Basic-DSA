#include<iostream>
using namespace std;

int main()
{
    int c,r;
    cout<<"enter columns= ";
    cin>> c;
    cout<<"enter rows= ";
    cin>> r;

    for(int i=1;i<=r;i++)
    {
        if(i==1||i==r)
        {
            for(int y=1;y<=c;y++)
            {
                cout<<"* ";
            }
        }
        else
        {
           for(int z=1;z<=c;z++)
           {
               if(z==1||z==c)
               {
                   cout<<"* ";
               }
               else
               {
                   cout<<"  ";
               }
           }
        }
        cout<< endl;
    }



    return 0;
}

