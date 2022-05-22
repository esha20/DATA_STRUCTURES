#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
	int temp;
	temp= a;
	a=b;
	b=temp;
}

int linear_search(int arr[], int n ,int key)
{
	for (int i=0;i<n;i++)
	{
		if (arr[i]==key)
		{
			swap(arr[i],arr[0]);		//after getting the key element we can swap it with the front element so that it can be searched with linear time complexity next time.
			//This is called the move to the front/head method.
			cout<<"The index at which the value is present is : ";
			return i+1;
		}
	}
	cout<<"Unsuccessful\n";
}
/*int linear_search(int arr[], int n ,int key)
{
	for (int i=0;i<n;i++)
	{
		if (arr[i]==key)
		{
			swap(arr[i],arr[i-1]);		//this is called the Transposition method. for finding the same key element next time in lesser amout of time and comparisons.
			return i;
		}
	}
}*/

int main()
{
	int n,key;
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	int *arr = new int [n];
	cout<<"Enter the elements : ";
	
	for (int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<"Enter the key value to be searched : ";
	cin>>key;
	
	cout<<linear_search(arr,n,key);
	return 0;
}
