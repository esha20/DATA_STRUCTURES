/*
	Applicable only on monotonic functions (ie. either increasing or decreasing)
	ceiling function used for finding the mid element.
	worst case time complexity of binary search algorithm is O(logn)
	Best case time complexity is constant (ie. when the key element is middle element of array).
*/
#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int low , int high, int key)
{
	if(low<high)
	{
	int mid = (low+high)/2;
	
	if(arr[mid]==key)
	return mid;
	
	if(key > arr[mid])
	return binary_search(arr,mid+1,high,key);
	
	return binary_search(arr,low,mid-1,key);
	}
	return -1;
}
int main()
{
	int n,key;
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter the elements of array :";
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<"Enter the number to be searched : ";
	cin>>key;
	
	cout<<"The index of the key element is : "<<binary_search(arr,0,n-1,key);
	return 0;
	
	
}
