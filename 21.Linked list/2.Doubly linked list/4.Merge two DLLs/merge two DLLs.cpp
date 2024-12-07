//GOAL :: Merge two sorted LLs so that resultant LL is also sorted
#include<iostream>
using namespace std;


// Making a general DLL
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

//Merge two LLs
Node* merge_ll(Node* &head1, Node* &head2)
{
   Node* p1=head1;/// ptr-1 for LL-1
   Node* p2=head2;/// ptr-2 for LL-2
   Node* mhead=new Node(-1);/// dummy ptr(head of merged list (not to be included))
   Node* p3=mhead;          /// ptr-3 for merged list
   while(p1!=NULL && p2!=NULL)
   {

      if(p1->value < p2->value)
      {
         p3->next=p1;
         p1=p1->next;

      }
      else{
         p3->next=p2;
         p2=p2->next;
      }
      p3=p3->next;
   }
   /// checking that LL-1 is ended full
   while(p1!=NULL)
   {
      p3->next=p1;
      p3=p3->next;
      p1=p1->next;
   }
   /// checking that LL-2 is ended full
   while(p2!=NULL)
   {
      p3->next=p2;
      p3=p3->next;
      p2=p2->next;
   }

   Node* merhead=mhead->next;
   return merhead;

   return merhead;
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
   //DLL-1
   Node* head=NULL;
   Node* prev=NULL;
   insert_at_head(head,7);
   insert_at_head(head,5);
   insert_at_head(head,4);
   insert_at_head(head,1);

   //DLL-2
/* TO make another linked list we use the same node classs but make diffrent nodes    */
   Node* head2=NULL;
   Node* prev2=NULL;
   insert_at_head(head2,6);
   insert_at_head(head2,3);
   insert_at_head(head2,2);

      Node* merhead=merge_ll(head,head2);
   print(merhead);


	return 0;
}
