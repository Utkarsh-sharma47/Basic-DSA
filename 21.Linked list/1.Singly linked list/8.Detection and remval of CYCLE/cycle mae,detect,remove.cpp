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

// Make CYCLE at position "p"
void cycle(Node* &head, int p)
{
   Node* temp=head;
   Node* target;
   int count=1;
   while(temp->next!=NULL)
   {
     if(count==p)
     {
        target=temp;
     }
     temp=temp->next;
     count++;
   }
   temp->next=target;
   return ;
}

//Detect cycle in LL
bool detect(Node* &head)
{
   Node* hare=head;
   Node* tort=head;
   while(hare!=NULL && hare->next!=NULL)
   {
      tort=tort->next;
      hare=hare->next->next;
      if(hare==tort)
      {
         return true;
      }
   }
   return false;
}

//Delete cycle in LL
void del_cycle(Node* &head)
{
   Node* hare=head;
   Node* tort=head;

   while(hare!=NULL && hare->next!=NULL)
   {
      tort=tort->next;
      hare=hare->next->next;

      if(hare->next==tort)
      {
         hare->next=NULL;
         return;
      }
   }
   cout<<"NO cycle to remove";
   return;
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
   cycle(head,4);
   cout<<detect(head);
   cout<<endl<<"after removal of cycle"<<endl;
   del_cycle(head);
   cout<<detect(head)<<endl;
   print(head);
   cout<<endl;
   del_cycle(head);


	return 0;
}
