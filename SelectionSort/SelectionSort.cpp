/*
 * SelectionSort.cpp
 *
 *  Created on: May 22, 2020
 *      Author: Kanishk
 */

#include <iostream>
using namespace std;






int main()
{
int n;

int arr[]={12,45,6,78,33,9,23,54};

n=sizeof(arr)/sizeof(arr[1]);

int min,temp;

for(int i=0;i<n;i++)

{   min=i;

  for(int j=i+1;j<n;j++)

  {
	  if(arr[min]>arr[j])
    	min=j;
  }
  temp=arr[i];
  arr[i]=arr[min];
  arr[min]=temp;
}
for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
return 0;
}






