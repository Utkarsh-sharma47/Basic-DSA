#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<< "no of element: ";
   cin>>n;
   cin.ignore();

   char arr[n+1];
   cout<<"enter sentence: ";
   cin.getline(arr,n);
   cin.ignore();

   int i=0;
   int curlen=0,maxlen=0;
   while(1)
   {
      if(arr[i]==' ')
      {
         if(curlen>maxlen)
         {
            maxlen=curlen;
            curlen=0;
         }
      }
      else{
         curlen++;
      }
      if(arr[i]!='\0')
      {
         break;
      }

      i=i++;
   }
   cout<< maxlen;



	return 0;
}
