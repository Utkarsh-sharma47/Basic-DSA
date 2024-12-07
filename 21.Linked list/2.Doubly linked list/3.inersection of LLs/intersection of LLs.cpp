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

//Length of LL
int length(Node* &head)
{
   Node* temp=head;
   int l=1;
   while(temp->next!=0)
   {
      temp=temp->next;
      l++;
   }
   return l;
}

// to find intersection
void intersection(Node* &head1,Node* &head2)///ONLY FOR WHEN : list one have more elements in it
{
   int l1=length(head1);
   int l2=length(head2);
   int d=l1-l2;
   Node* start1=head1;
   Node* start2=head2;
   int c=1;
   while(c!=d)
   {
      start1=start1->next;
      c++;
   }
   start1=start1->next;
   int i=1;/// taking intersection point with respect from list-2,,, "i"
   while(start1->value!=start2->value)
   {
      start1=start1->next;
      start2=start2->next;
      i++;
   }

   cout<<" first common element is: "<<start2->value;

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
   //DLL-1
   Node* head=NULL;
   Node* prev=NULL;
   insert_at_head(head,1);
   insert_at_head(head,2);
   insert_at_head(head,3);
   insert_at_head(head,4);
   insert_at_head(head,5);
   insert_at_head(head,6);
   insert_at_head(head,7);

   //DLL-2
/* TO make another linked list we use the same node classs but make diffrent nodes    */
   Node* head2=NULL;
   Node* prev2=NULL;
   insert_at_head(head2,1);
   insert_at_head(head2,2);
   insert_at_head(head2,   3);

   intersection(head,head2);

	return 0;
}
