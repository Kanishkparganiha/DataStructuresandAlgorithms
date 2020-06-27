/*
 * source.cpp
 *
 *  Created on: May 21, 2020
 *      Author: Kanishk
 */
#include <iostream>
using namespace std;


struct Node
{
int data;
Node *next;
Node *prev;

};

Node *head=NULL;

void Insertion_at_Begining(int val)
{
Node *NEW=new Node;
NEW->data=val;
NEW->next=head;
NEW->prev=NULL;
if (head!=NULL)
 head->prev=NEW;

head=NEW;
}
void Insertion_at_End(int val)
{
  Node *last=head;
  Node *NEW=new Node;
  NEW->data=val;
  NEW->next=NULL;
  if(head==NULL)
  {
	  cout<<"The List was Empty"<<endl;
      NEW->prev=NULL;
      head=NEW;
      return;
  }


 while(last->next!=NULL)
		 last=last->next;

 last->next=NEW;
 NEW->prev=last;

}

void Show()
{
	Node *temp=head;
    if(temp==NULL)
       {
         cout<<"The List is Empty"<<endl;
       }

	while(temp!=NULL)
	{cout<<temp->data<<" ";
	 temp=temp->next;
	}
}

int main()
{
	int flag=1,val,choice;
    while(flag==1)
   {
       //cout<<" Enter the Choice of Operation you want to perform"<<endl;
       cout<<"\n 1.Insertion at Beginning 2.Insertion at End 3.Show List 4.Exit "<<endl;
       cin>>choice;
       switch(choice)
              {
	              case 1:cout<<"Enter the Value to be Added"<<endl;
	                     cin>>val;
	                     Insertion_at_Begining(val);
	       	             break;

	              case 2:cout<<"Enter the Value to be Added"<<endl;
	                     cin>>val;
	                     Insertion_at_End(val);
	       	             break;


		          case 3:Show();
	       	             break;

		          case 4:flag=0;
	       	             break;
	           }
  }

    cout<<"PROGRAM TERMINATED!!!!!" ;
return 0;

}

