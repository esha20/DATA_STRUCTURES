/*
	Every element in the input array appears twice except one element. You need to find that unique element in the array.
	input array {1,2,3,2,1}
	output 3
	
	EXPLAINATION :-
	1. General approach :- count every element in the input array . If the count reaches 2, ignore the element , else fetch it.
						   This can be solved in n^2 time complexity.
	
	2. Use XOR operation :- If we XOR two identical elements, we get zero and any other element XORed with 0, will return that number itself.
							We will here every element of the array with each other. the remaining element will be the unique element we need.
*/
#include <bits/stdc++.h>
using namespace std;
int find_unique(int arr[], int n)
{
	int unique;
	for(int j=0;j<n;j++)
	
	unique^=arr[j];
	
	return unique;
}
int main()
{
	int n;
	cout<<"Enter the number of elements : ";
	cin>>n;

	int * arr= new int[n];
	cout<<"Enter the elements : ";
		
	for (int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<"The unique element in the array is : "<<find_unique(arr,n);
	
	return 0;
	
}

