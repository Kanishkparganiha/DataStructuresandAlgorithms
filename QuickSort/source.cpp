/*
 * source.cpp
 *
 *  Created on: Jun 2, 2020
 *      Author: Kanishk
 */
#include <iostream>
using namespace std;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


int Partition(int arr[],int p,int r)
{

int x;
x=arr[r];
int i=p-1;
for(int j=p;j<r;j++)
{	if(arr[j]<=x)
	{	i++;
        swap(&arr[i],&arr[j]);
	}	}
swap(&arr[i+1], &arr[r]);

return (i+1);
}

void Quicksort(int arr[],int p,int r)

{
int q;
if (p<r)

{
q=Partition(arr,p,r);
Quicksort(arr,p,q-1);
Quicksort(arr,q+1,r);

}
}
void PrintArray(int arr[],int n)
{
cout<<"Array: ";
for(int i=0;i<n;i++)
	cout<<arr[i]<<", ";
cout<<endl;
}
int main()
{

int n;

cout<<"Enter the number of elements"<<endl;
cin>>n;
cout<<"Enter the array element"<<endl;
int arr[n];
for(int i=0;i<n;i++)
	{cin>>arr[i];}

PrintArray(arr,n);
Quicksort(arr,0,n);
PrintArray(arr,n);
return 0;}



