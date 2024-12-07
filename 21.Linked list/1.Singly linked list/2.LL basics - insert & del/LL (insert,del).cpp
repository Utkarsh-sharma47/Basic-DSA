#include<iostream>
using namespace std;

// making a node class
class Node{
public:
   int value;
   Node* next;

   Node(int data) /// constructor of node, default value of next = NULL
   {
      value=data;
      next=NULL;
   }
};

// count number of values in LL ***excluding NULL***
int countnum(Node* &head)
{
   Node* temp=head;
   int c=1;
   while(temp->next!=NULL)
   {
      temp=temp->next;
      c++;
   }
   return c;
}

// insert at HEAD
void insert_head(Node* &head,int val)  /** pass HEAD by REFERENCE */
{
   Node* newnode=new Node(val);
   newnode->next=head; ///new node ko head pr point kiya
   head=newnode;       /// now we need to give head a new value
   return;
}

// insert at TAIL
void insert_tail (Node* &head, int data)  /** pass HEAD by REFERENCE */
{
   Node* newnode=new Node(data);
   if(head==NULL)
   {
      insert_head(head,data);
      return;
   }
   Node* temp=head;
   while(temp->next !=NULL)   /* make sure this condition is like (( temp->next != NULL ))   */
   {
      temp=temp->next;
   }
   temp->next=newnode;
   return;
}

// insert at POSITION "p"
void insert_at_p (Node* &head, int data, int p)
{
   Node* newnode=new Node(data);
   Node* temp=head;
   for(int i=1; i<p-1; i++)
   {
      temp=temp->next;
   }                             /// after loop, temp is at (position-1)
   newnode->next=temp->next;     /// temp is (p-1) and [temp->next] is at positon "p"
   temp->next=newnode;
   return;
}

// delete from head
void delete_head(Node* &head)
{
   if(head==NULL)
   {
      cout<<"list is empty";
      return;
   }
   Node* temp=head;  /// now temp is head
   head=head->next;   /// and head is 2nd element of the LL so you can delete the first one (temp)
   delete temp;
   return;
}

//delete from tail
void delete_tail(Node* &head)
{
   if(head==NULL)
   {
      cout<<"list is empty";
      return;
   }

   Node* temp=head;
   while(temp->next->next)
   {
      temp=temp->next;
   }
   delete temp->next;
   temp->next=NULL;
   return;

   return;
}

//delete from position p
void delete_p(Node* &head, int p)
{
   if(head==NULL)
   {
       cout<<"list is empty";
       return;
   }
    Node* temp=head;
    for(int i=1; i<p-1 ;i++)
    {
       temp=temp->next;    /* here ->next  makes it one node ahead */
    }                            ///after loop,, temp is at (p-1) node
    Node* nodetodel=temp->next;
    temp->next=temp->next->next;    /* here ->next   represent the next node of that same node */
    delete nodetodel;
    return;
}

void update_x_node(Node* &head, int x, int new_data)
{
   if(head==NULL)
   {
      cout<<"empty list";
      return;
   }

   Node* temp=head;
   for(int i=1; i<x; i++)
   {
      temp=temp->next;
   }
   temp->value=new_data;
}

//PRINT function
void print(Node* head)
{
   Node* temp=head;
   while(temp!=NULL)
   {
      cout<<temp->value<<" -> ";
      temp=temp->next;
   }
   cout<<"NULL";

   return;
}

int main()
{
   Node* head=NULL;
   insert_head(head,3);
   insert_head(head,4);
   insert_head(head,5);
   insert_tail(head,2);
   insert_at_p(head,69,2);
   insert_at_p(head,6699,4);
   cout<<"LL initially:        ";
   print(head);

   /**delete_head(head);
   cout<<endl<<"After deleting HEAD: ";
   print(head);

   delete_tail(head);
   cout<<endl<<"After deleting TAIL: ";
   print(head);

   delete_p(head,3);
   cout<<endl<<"After deleting pos=3: ";
   print(head);

   update_x_node(head,2,33);
   cout<<endl<<"After updating pos=2 to 33 LL is : ";
   print(head);*/

   cout<<endl<<"no of values = "<<countnum(head);


   cout<<endl;
   return 0;
}
