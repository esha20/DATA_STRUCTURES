#include<bits/stdc++.h>
using namespace std;
int swap (int &a, int &b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
}
void selection_sort(int arr[],int n)
{
	for (int i=0;i<n-1;i++)
	{
		int min=arr[i];
		for(int j=i+1;j<n;j++)
		{
		if(arr[i]>arr[j])
		swap(arr[i],arr[j]);	
		}
		}	
}
void Print_arr(int arr[],int n)
{
	cout<<"The sorted array after implementation of selection sort is : ";
	for (int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int n;
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	
	int *arr = new int[n];
	cout<<"Enter the elements in the array  :";
	
	for (int i=0;i<n;i++)
	cin>>arr[i];
	
	selection_sort(arr,n);
	Print_arr(arr, n);
	
	return 0;
}
