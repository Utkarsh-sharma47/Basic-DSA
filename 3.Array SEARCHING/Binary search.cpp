 #include<iostream>
using namespace std;

int main()
{
    int n,k,b;
    cout<<"enter no. of values to be stored ";
    cin>>n;
    int array[n];


    for(int i=1;i<=n;i++)
    {
        cout<<"element number "<<i<<" = ";
        cin>> array[i];
    }
    cout<<"enter no. to find ";
    cin>>k;

    int s=0;
    int e=n;


    while(s<=e)
    {
        int mid=((s+e)/2);
        if(array[mid]==k)
        {
            cout<<"number is at "<< mid;
            break;
        }
        else if(array[mid]>k)
        {
            e=mid-1;
            continue;
        }
        else if(array[mid]<k)
        {
            s=mid+1;
            continue;
        }
    }




        return 0;
}
