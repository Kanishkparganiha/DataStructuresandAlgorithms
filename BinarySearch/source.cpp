/*
 * source.cpp
 *
 *  Created on: May 22, 2020
 *      Author: Kanishk
 */

#include <iostream>
using namespace std;

int BinarySearch(int arr[],int a,int b,int v)
{
if(a<=b)
 {
   int m= a+(b) /2 ;
   if (arr[m]==v)
	   return m;
   if (arr[m]>v)
	   return BinarySearch(arr,a,m-1,v);

   return BinarySearch(arr,m+1,b,v);
  }

	return -1;
}


int main()
{
int num,n;

int arr[]={4,5,6,7,10,12,13,14,15};

n=sizeof(arr)/sizeof(arr[1]);

cout<<"Enter the value you want to search"<<endl;

cin>>num;

int result=BinarySearch(arr,0,n-1,num);

if(result==-1)

	cout<<"Element not found";
else

	cout<<"Element Found"<<result;

return 0;
}


