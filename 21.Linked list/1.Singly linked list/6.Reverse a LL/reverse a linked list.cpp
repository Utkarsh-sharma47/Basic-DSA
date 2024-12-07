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
      next =NULL;
   }

};

// Reverse a linked list
Node* rev_list(Node* &head)
{
   Node* prev=NULL;      ///  'prev' pointer pointing to NULL
   Node* curr=head;      ///  'curr' pointer pointing to NULL

   while(curr!=NULL)
   {
      Node* nex=curr->next; ///  'next' pointer pointing to remaining linked list to connect afterwards
      curr->next=prev;
      ///sabko ek aage kardo
      prev=curr;/* for replacement just equate without "-> next"   */
      curr=nex;

   }
   /// make your new head which is prev pointer after the loop
   Node* new_head=prev->next->next;
   return new_head;
}

//Insert at head
void insert_at_head(Node* &head, int val)
{
   Node* newnode=new Node(val);
   newnode->next=head;
   head=newnode;


   return;
}

//Print
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
   insert_at_head(head,7);
   insert_at_head(head,6);
   insert_at_head(head,5);
   insert_at_head(head,4);
   insert_at_head(head,3);
   insert_at_head(head,2);
   insert_at_head(head,1);

   head =rev_list(head); /// change you previous head to new head of reversed linked list
   print(head);

	return 0;
}
