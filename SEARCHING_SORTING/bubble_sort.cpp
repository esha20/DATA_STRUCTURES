//using optimised algo for bubble sort so that if there is no swapping in any pass, it stops the sorting because that means that the array is sorted.

#include<bits/stdc++.h>
using namespace std;
void swap(int &n, int &m)
{
	int temp;
	temp = n;
	n = m ;
	m = temp;
}
void bubble_sort(int arr[], int n)
{
	int flag;
	for (int i=0 ;i<n-1 ;i++)
	{
		flag =0;
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			swap(arr[j],arr[j+1]);
			flag++;
		}
	}
	if(flag==0)
	break;
	}
}
void Print_arr(int arr[], int n)
{
	cout<<"The sorted array is : ";
	for (int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int n;
	cout<<"Enter the number of elements you want to enter : ";
	cin>>n;
	int *arr= new int[n];
	cout<<"Enter the elements : ";
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bubble_sort(arr,n);
	Print_arr(arr,n);
	return 0;
}
