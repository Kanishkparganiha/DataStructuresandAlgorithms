/*
 * source.cpp
 *
 *  Created on: May 20, 2020
 *      Author: Kanishk
 */
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *link;
};
Node *last=NULL;
 void Insert_Beginning(int val)
 {
	 Node *NEW=new Node;
	 NEW->data=val;
	 if(last==NULL)
	 {
		 last=NEW;
		 last->link=last;
	 }
	 else
	 {
		NEW->link=last->link;
		last->link=NEW;
	 }
 }
void Insertion_End(int val)
{ Node *NEW=new Node;
  if(last==NULL)
  {
	  cout<<"The List is Empty";

  }
  else
  { NEW->data=val;
	NEW->link=last->link;
	last->link=NEW;
    last=NEW;
  }
}

void Show()
{
	Node *temp=last;
	temp=last->link;
	if(last==NULL)
	{
		cout<<"The List is Empty";

	}
	else
	{
		do
		{
		 cout<<temp->data<<" ";
		 temp=temp->link;
		} while(temp!=last->link);
	}
}

int main()
{
int choice,flag=1,value;
while(flag==1)
{
cout<<"\n1.Insertion at Beginning 2.Insertion at End 3.Show 4.Exit "<<endl;
cin>>choice;
switch(choice)
{
case 1:cout<<"Enter the value:"<<endl;
       cin>>value;
       Insert_Beginning(value);
       break;
case 2:cout<<"Enter the value:"<<endl;
       cin>>value;
       Insertion_End(value);
       break;
case 3:Show();
		break;
case 4:flag=0;
       break;

}
}
return 0;
}
