#include<iostream>
using namespace std;

// Making a DLL
class Node
{
public:
   Node* prev;
   Node* next;
   int value;

   Node(int data)
   {
      value=data;
      prev=NULL;
      next=NULL;
   }
};

// Insert at head
void insert_at_head(Node* &head,int data)
{
   Node* n1=new Node(data);
   n1->next=head;
  if(head!=NULL)
  {
      head->prev=n1;///cuz u cant access head ka prev if head is NULL
  }
   n1->prev=NULL;
   head=n1;

   return;
}

// insert at tail
void insert_at_tail(Node* &head, int data)
{
   if(head==NULL)
   {
      insert_at_head(head,data);
      return;
   }
   Node* n=new Node(data);
   Node* temp=head;
   while(temp->next!=NULL)
   {
      temp=temp->next;
   }
   temp->next=n;
   n->prev=temp;

   return;
}
//del at head
void del_at_head(Node* &head)
{
   Node* todel=head;
   head=head->next;
   head->prev=NULL;
   delete todel;
   return;
}

// Delete at position p
void del_at_p(Node* head, int p)
{
   if(p==1)
   {
      del_at_head(head);
      return;
   }
   Node* temp=head;
   int c=1;
   while(temp!=NULL && c!=p)
   {
      temp=temp->next;
      c++;
   }
   temp->prev->next=temp->next;
   if(temp->next!=NULL)
   {
      temp->next->prev=temp->prev;
   }
   return;
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
   Node* prev=NULL;
   insert_at_head(head,1);
   insert_at_head(head,2);
   insert_at_head(head,3);
   insert_at_head(head,4);
   insert_at_head(head,5);
   insert_at_head(head,6);
   cout<<"initially:         ";
   print(head);
   cout<<endl<<"del karo 4th wala: ";
   del_at_p(head,4);
   print(head);
   cout<<endl<<"del karo 1st wala: ";
   del_at_head(head);
   print(head);



	return 0;
}
