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
// Reverse Print
void rev_print(Node* head)
{
   if(head==NULL)
   {
      return;
   }
   rev_print(head->next);
   cout<<head->value<<" -> ";
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
   rev_print(head);cout<<"NULL"<<endl;
   cout<<"Our linked list is still the same since we have just reversed printed it but if we print it in normal way we get :-"<<endl;
   print (head);

	return 0;
}
