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

// Reverse k node
Node* rev_k_nodes(Node* &head, int p)
{
   Node* prev=NULL;
   Node* curr=head;
   Node* nex;
   int count=0;
   while(curr!=NULL && count<p)
   {
      nex=curr->next;
      curr->next=prev;
      prev=curr;
      curr=nex;
      count++;
   }
   if(nex!=NULL)
   {
      head->next=rev_k_nodes(nex,p);
   }
   return prev;
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
   insert_at_head(head,6);
   insert_at_head(head,5);
   insert_at_head(head,4);
   insert_at_head(head,3);
   insert_at_head(head,2);
   insert_at_head(head,1);
   cout<<"Before: ";
   print(head);
   int k=2;
   Node* new_head = rev_k_nodes(head,k);
   cout<<endl<<"for k = "<<k<<endl<<"After: ";
   print(new_head);

	return 0;
}
