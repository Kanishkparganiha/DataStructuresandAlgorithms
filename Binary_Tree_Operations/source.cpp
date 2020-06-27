/*
 * source.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: Kanishk
 */
#include <iostream>
using namespace std;


struct Node{
int data;
Node *leftChild;
Node *rightChild;
};

Node *Insert(Node *node,int val)
{
if(node==NULL)
{ node=new Node;

node->data=val;
node->leftChild=NULL;
node->rightChild=NULL;

}

else if(node->data > val)
{

node->leftChild=Insert(node->leftChild,val);
}
else if(node->data<val)
{

node->rightChild=Insert(node->rightChild,val);
}
return node;
}

void InOrder(Node *node)
{


if(node!=NULL)
{

InOrder(node->leftChild);
cout<<node->data<<" -> ";
InOrder(node->rightChild);
	}
	return;
}


void PreOrder(Node *node)
{


if(node!=NULL)
{

cout<<node->data<<" -> ";
PreOrder(node->leftChild);
PreOrder(node->rightChild);
	}
	return;
}


void Search(Node *node,int val)
{
if(node->data==val || node==NULL)
{
cout<<"Found";
return ;
}
else if(node->data > val)
{
return Search(node->leftChild,val);}
else
{
	return Search(node->rightChild,val);
}
}




int main()
{
Node *root=NULL;
root=Insert(root,50);
Insert(root,30);
Insert(root,20);
Insert(root,70);
Insert(root,60);
Insert(root,10);
PreOrder(root);
cout<<endl;
InOrder(root);
cout<<endl;
Search(root,10);
return 0;
}
