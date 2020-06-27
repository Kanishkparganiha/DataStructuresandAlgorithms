/*
 * LinkedList.cpp
 *
 *  Created on: May 17, 2020
 *      Author: Kanishk
 */
#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* link;

};

Node *top=NULL;


void Push(int value)
{
	Node *ptr=new Node;
	ptr->data=value;
	ptr->link=NULL;
	if(top==NULL)
	{
		top=ptr;
	}
	else
	{
	 ptr->link=top;
	 top=ptr;
	}
}
void Pop()
{
  Node *ptr=top;
  if(top==NULL)
  {
	  free(top);
  }
  else
  {
	ptr=top;
	top=top->link;
	free(ptr);
  }

}
void Show()
{Node *ptr=top;
 if(top==NULL)
 {
	 cout<<"List is Empty";

 }
 else
 {
	 while(ptr!=NULL)
	 {
		 cout<<ptr->data<<" ";
		 ptr=ptr->link;
	 }
 }
}
int main()

{
	 int choice, flag=1, value;
	 while( flag == 1)
	 {
	  cout<<"\n1.Push 2.Pop 3.show 4.exit\n";
	  cin>>choice;
	  switch (choice)
	  {
	  case 1: cout<<"Enter Value:\n";
	          cin>>value;
	          Push(value);
	          break;
	  case 2: Pop();
	          break;
	  case 3: Show();
	          break;
	  case 4: flag = 0;
	          break;
	  }
	 }




return 0;
}
