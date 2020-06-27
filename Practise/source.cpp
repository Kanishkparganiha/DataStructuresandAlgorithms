

#include <iostream>
using namespace std;

void Check(int arr[],int n,int sum)
{int i=0,j=3;
while(i!=j)
{
	cout<<arr[i]<<" + "<<arr[j]<<" = "<<arr[i]+arr[j]<<endl;
	i++;
}

}

int main()
{int n;
cout<<"Enter the Array Size"<<endl;
cin>>n;
int sum=8;
cout<<"Enter the Elements";
Check(a,sum);
cout<<"B ---------------------------"<<endl;
Check(b,sum);
return 0;}
