#include<iostream>
using namespace std;


class Stack{
   /** making array and a pointer top */
   int* arr;
   int top;

public:
   /** constructor for stack class*/
   Stack(int n)
   {
      arr=new int[n];
      top=-1;
   }
   /**push function */
   void push(int x,int n)
   {
      if(top==n-1)/// condition when top is already at last element
      {
         cout<<"Stack overflow";
         return;
      }
      top++;
      arr[top]=x;
      return;
   }

    /**pop function */
    void pop()
    {
       if(top==-1)
       {
          cout<<"Empty Stack";
          return;
       }
       top--;
       return;
    }

    /**Top function */
    int Top()
    {
       return arr[top];
    }

     /**empty function */
    bool Empty()
    {
       if(top==-1)
       {
          cout<<"empty";
          return true;
       }
       cout<<"non-empty";
       return false;
    }

     /**PRINT function */
    void print(int n)
    {
       int i=0;
       while(i!=top+1)
       {
          cout<<arr[i];
          i++;
       }
       return;
    }
};


int main()
{
   // Make a STACK
   int n=6;
   Stack st(6);
   /*now push some elements in the array */
   st.push(1,6);
   st.push(2,6);
   st.push(3,6);
   st.push(4,6);
   st.push(5,6);
   st.push(6,6);
   cout<<"entering array 1 to 6 :: ";
   st.print(6);
   cout<<endl;

   st.pop();
   cout<<"after popping top once :: ";
   st.print(6);
   cout<<endl;

   cout<<"Calling top operation :: ";
   cout<<st.Top()<<endl;


   cout<<"calling is empty function :: ";
   st.Empty();




   cout<<endl;
	return 0;
}
