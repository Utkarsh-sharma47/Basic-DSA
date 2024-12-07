#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   cin.ignore();

   char arr[n+1];
   cin.getline(arr,n);
   cin.ignore();

   for(int i=0;i<n;i++)
   {
   if(arr[i]==' ')
   {
      cout<<"space detected";
      break;
   }

   }

	return 0;
}
