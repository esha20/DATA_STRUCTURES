/*
	swap the alternate elements in the array.
	input array {1,2,3,4,5,6}
	output array {2,1,4,3,6,5}	 
*/
#include <bits/stdc++.h>
using namespace std;
int swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	
	int * arr = new int [n];
	
	cout<<"enter the elements of array : ";
	
	for (int i=0;i<n;i++)
	cin>>arr[i];
	
	for (int j=0;j<n;j+=2)
	{
		if (j+1<n)
		swap(arr[j],arr[j+1]);
	}
	
	cout<<"The array after swaping is : ";
	
	for (int k=0;k<n;k++)
	cout<<arr[k]<<" ";
	
	return 0;
}
