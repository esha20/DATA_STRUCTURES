//Write a recursive function that takes a number and returns the sum of all the numbers from zero to that number.

#include<bits/stdc++.h>
using namespace std;
int cumulative(int n)
{
	if (n==0)
	return 0;
	else
	return cumulative (n-1)+n;
}
int main()
{
	int n;
	cout<<"Enter the number you want to find the sum upto : ";
	cin>>n;
	 cout<<"The cumulative upto this number is : "<<cumulative(n);
	 return 0;
}
