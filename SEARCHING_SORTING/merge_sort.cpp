#include<bits/stdc++.h>
using namespace std;
void merge (int arr[], int low, int high)	//function to merge the arrays
{
	int mid = (low+high)/2;
	
	int len1= (mid-low)+1;
	int len2= (high-mid);
	
	//form left and right sub arrays
	int *Left_arr= new int [len1];
	int *Right_arr = new int [len2];
	
	//copy the elements from the input array into the smaller arrays to further sort and then merge	
	int minIndex = low;
	for (int i=0;i<len1;i++)
	Left_arr[i]= arr[minIndex++];
	
	minIndex= mid+1;
	for (int j=0;j<len2;j++)
	Right_arr[j]=arr[minIndex++];
	
	//merge the two sorted arrays 
	int index1=0, index2=0;
	minIndex=low;
	
	while (index1<len1 && index2<len2)
	{
		if(Left_arr[index1]<Right_arr[index2])
		arr[minIndex++]=Left_arr[index1++];
		
		else
		arr[minIndex++]=Right_arr[index2++];
	}
	while (index1<len1)
	{
		arr[minIndex++]=Left_arr[index1++];
	}
	while (index2<len2)
	{
		arr[minIndex++]=Right_arr[index2++];
	}
}
int merge_sort(int arr[], int low, int high)
{
	if (low>=high)
	return 0;
	
	//finding the mid element 
	int mid = (low+high)/2;
	
	//recurrsively bifurcating the array based on the mid element.
	
	//left subarray
	merge_sort(arr,low, mid);
	
	//right subarray
	merge_sort(arr,mid+1,high);
	
	//after bifurcating into smaller segments until one element is left, merge it in order.
	
	merge(arr,low,high);	
}
void Print_arr(int arr[], int n)	//function to print the sorted array
{
	cout<<"The sorted array is : ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int n;
	cout<<"Enter the elements to be stored in the array : ";
	cin>>n;
	cout<<"Enter the elements of the array : ";
	
	int *arr= new int[n];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	merge_sort(arr,0,n-1);
	Print_arr(arr,n);
	return 0;
}
