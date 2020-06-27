/*
 * Queue_Using_Linked_List.cpp
 *
 *  Created on: May 16, 2020
 *      Author: Kanishk
 */
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *link;

};
Node *front=NULL;
Node *rear=NULL;
void Enqueue(int value)
{
	Node *ptr=new Node();
	ptr->data=value;

    if(front==NULL)
	 {
		front=ptr;
		rear=ptr;
	 }
	else
	{
		rear->link=ptr;
		rear=ptr;
	}
}
void Dequeue()

{
	if(front==NULL && rear==NULL)
		{
		 cout<<"Queue is empty";
		}
	if(front==rear)
	{
		free(front);
		front=rear=NULL;
	}
	else
		{
		Node *ptr = front;
		front=front->link;
		free(ptr);
		}

}


void Show()
{
	if(front==NULL && rear==NULL)
	{
		cout<<"List is empty";
	}
	else

	{Node *ptr=front;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->link;
		}

	}
}

void Reverse()
{
struct Node *prev, *next, *current;
current=front;

}

int main()
{
	 int choice, flag=1, value;
	 while( flag == 1)
	 {
	  cout<<"\n1.enqueue 2.dequeue 3.show 4.reverse 5.exit\n";
	  cin>>choice;
	  switch (choice)
	  {
	  case 1: cout<<"Enter Value:\n";
	          cin>>value;
	          Enqueue(value);
	          break;
	  case 2: Dequeue();
	          break;
	  case 3: Show();
	          break;
	  case 4: Reverse();
	          break;
	  case 5: flag = 0;
	          break;
	  }
	 }
}
