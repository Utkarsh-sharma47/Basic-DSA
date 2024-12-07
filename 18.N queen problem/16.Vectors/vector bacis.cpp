#include<iostream>
#include<vector>  // header file to use vectrs
using namespace std;

int main()
{

   // declaration of vector
   vector<int> v;
   vector<int> v1;

   v1.push_back(10);
   v1.push_back(20);
   v1.push_back(30);
   int z=40;
   v1.push_back(z);

   //input in vector

   cout<<"to end the input just put -1 at last"<<endl;
	for(int j=0; j>-1; j++)
   {
      int m;
      cout<<"enter element no "<<j+1<<" = ";
      cin>>m;
      v.push_back(m);
      if (m==-1)
      {
          v.pop_back();
          v.pop_back();
          break;
      }
   }

   // out of vector (like array)

	for(int i=0; i<v.size(); i++)
   {
      cout<<v[i]<<" ";
   }
   cout<<endl<<"last value of vector is = "<<v[v.size()]<<endl;

   // to delete last value of vector

/// since last value is zero soo u have to delete twice to delete last value
   v1.pop_back();
   v1.pop_back();
   cout<<"last of v1 = "<<v1[v1.size()];





	return 0;
}
