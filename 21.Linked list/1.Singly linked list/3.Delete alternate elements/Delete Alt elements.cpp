#include<iostream>
using namespace std;

class Node
{
public:
   int value;
   Node* next;

   Node(int data)
   {
      value=data;
      next=NULL;
   }
};

void insert_head(Node* &head, int val)
{
   Node* newnode=new Node(val);
   newnode->next=head;
   head=newnode;
   return;
}

// Alternate Delete function
void alt_del(Node* &head)
{
   Node* temp=head;
   for(int i=0; temp->next!=NULL && temp!=NULL; i++)
   {

         Node* todel=temp->next;       /// to delete node is node which is at even position
         temp->next=temp->next->next;   /// connect both the odd nodes
         delete todel;

      temp=temp->next;
   }
   return;
}


void print(Node* head)
{
   Node* temp=head;
   while(temp->next!=NULL)
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
   insert_head(head,-1);
   insert_head(head,1);
   insert_head(head,2);
   insert_head(head,3);
   insert_head(head,4);
   insert_head(head,5);
   insert_head(head,6);
   insert_head(head,7);
   insert_head(head,8);
   print(head);
   cout<<endl;

   alt_del(head);
   print(head);




	return 0;
}
