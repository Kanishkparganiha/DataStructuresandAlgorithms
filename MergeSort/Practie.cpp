/*
 * Practie.cpp
 *
 *  Created on: May 18, 2020
 *      Author: Kanishk
 */

#include <iostream>

using namespace std;

void Merge(int arr[],int p,int q,int r)
{
int n1=q-p+1;
int n2=r-q;
int L[n1],R[n2];
for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
for (int j = 0; j < n2; j++)
    R[j] = arr[q + 1+ j];

int k=p;
int i=0;
int j=0;

while(i<n1 && j<n2)
{
if(L[i]<=R[j])
{	arr[k]=L[i];

    i++;
}
else
{
arr[k]=R[j];

j++;
}
k++;
}
while(i<n1)

{
arr[k]=L[i];
i++;
k++;

}

while(j<n2)

{
arr[k]=R[j];
k++;
j++;

}




}








void MergeSort(int arr[],int p,int r)
{


int q;

if(p<r)
{
q=(p+(r-1))/2;
MergeSort(arr,p,q);
MergeSort(arr,q+1,r);
Merge(arr,p,q,r);
}
}


void Display(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        cout<<a[i]<<"->";
    }
    cout<<"\n";
}



int main()
{
int arr[]={4, 23, 7, 39, 19, 0, 9, 14};
int n=sizeof(arr)/sizeof(arr[0]);

MergeSort(arr,0,n-1);
Display(arr,n);
return 0;
}



