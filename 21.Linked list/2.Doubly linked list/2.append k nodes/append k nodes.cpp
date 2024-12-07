//GOAL: last ke k nodes starting mai aa jae
#include<iostream>
using namespace std;


/// making a node class
class Node{
public:
   int value;
   Node* next;

   Node(int data) /** constructor of node, default value of next = NULL*/
   {
      value=data;
      next=NULL;
   }
};
/// Insert at head
// insert at HEAD
void insert_head(Node* &head,int val)  /** pass HEAD by REFERENCE */
{
   Node* newnode=new Node(val);
   newnode->next=head; ///new node ko head pr point kiya
   head=newnode;       /// now we need to give head a new value
   return;
}

// Append 'K' last nodes
Node* append_last_k_nodes(Node* &head, int k)
{
   Node* temptail = head;
   int length=1;
   /// go to tail
   while(temptail->next!=NULL)
   {
      temptail=temptail->next;
      length++;
   }
   temptail->next=head;
   Node* new_tail;
   Node* new_head;
   Node* temp=head;
   int counti=1;
   while(temp!=NULL)
   {
      if(counti==(length-k))
      {
         new_tail=temp;
         break;
      }
      temp=temp->next;
      counti++;
   }
   new_head=new_tail->next;
   new_tail->next=NULL;
   return new_head;

}

///PRINT function
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
   insert_head(head,6);
   insert_head(head,5);
   insert_head(head,4);
   insert_head(head,3);
   insert_head(head,2);
   insert_head(head,1);
   cout<<"Initially::       ";
   print(head);cout<<endl;


   int k=4;
   head=append_last_k_nodes(head,k);
   cout<<"Append last "<<k<<" nodes:: ";
   print(head);cout<<endl;

	return 0;
}
