#include<bits/stdc++.h>
using namespace std;
int Print_arr(int arr[], int n)
{
	if (n<0)
	{
	return 0;
	}
	else{
	Print_arr(arr,n-1);
	cout<<arr[n]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int *arr = new int [n];
	cout<<"Enter the elements of the array : ";
	for (int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<"The elements of array you entered are : ";
	Print_arr(arr,n-1);
	delete arr;
	return 0;
}
