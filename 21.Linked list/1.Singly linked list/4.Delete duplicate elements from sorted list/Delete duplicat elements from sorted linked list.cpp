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

//Insert at head
void insert_at_head(Node* &head, int val)
{
   Node* newnode=new Node(val);
   newnode->next=head;
   head=newnode;


   return;
}

//Delete duplicate from sorted linked list
void del_duplicate(Node* head)
{
   Node* curr=head;
   while(curr)
   {
      if(curr->next && curr->value==curr->next->value)  /** current node ka next should not be null */
      {
         Node* to_del=curr->next;
         curr->next=curr->next->next;
         delete to_del;
      }
      curr=curr->next;
   }

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
   insert_at_head(head,3);
   insert_at_head(head,3);
   insert_at_head(head,3);
   insert_at_head(head,3);
   insert_at_head(head,2);
   insert_at_head(head,2);
   insert_at_head(head,1);
   del_duplicate(head);
   print(head);


	return 0;
}
