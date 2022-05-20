#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int size)
{
	int key,j;
	for (int i=1;i<size;i++)
	{
	key = arr[i];
	j=i-1;
	while(j>=0 && key < arr[j])
	{
		arr[j+1]=arr[j];
		j=j-1;
	}
	arr[j+1]=key;
	}
}
void Print_arr(int arr[], int size)
{
	cout<<"The sorted array after applying insertion sort is : ";
	for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int n;
	cout<<"Enter the number of elements : ";
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter the elements of the array : ";
	for (int i=0;i<n;i++)
	{
	cin>>arr[i];		
	}	
	insertion_sort(arr,n);
	Print_arr(arr,n);
	return 0;
}
