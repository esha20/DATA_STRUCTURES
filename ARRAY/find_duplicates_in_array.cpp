/*
	You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice.
	Your task is to find the duplicate integer value present in the array.
	For example:
	Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
	Note :
	A duplicate number is always present in the given array.
*/
#include<bits/stdc++.h>
using namespace std;
int find_duplicates(vector<int> &arr,int n)
{
	int ans=0;
	
	//XOR of all the numbers from 1 to n-1
	for(int i=1;i<n;i++)
	ans^=i;
	
	for(int j=0;j<n;j++)
	{
		ans^=arr[j];
	}
	return ans;
	
}
int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	
	cout<<"Enter the elements of array (include numbers from 1 to any number n, continuously and one duplicate ) : ";
	vector <int> arr(n);
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<"The duplicate element is : "<<find_duplicates(arr,n);
	return 0;
}
