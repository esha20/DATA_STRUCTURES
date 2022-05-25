/*
	you are given a number of stairs.Initially you are at the 0th stair, and you need to
	reach the nth stair. Each time you can climb either one or two steps. You are supposed to return the number of distinct ways
	to climb up the stairs.
*/
#include<bits/stdc++.h>
using namespace std;
int Climb_n(int n)
{
	if (n<0)
	return 0;
	
	if(n==0)
	return 1;
	
	//we can either reach by climbig one stair or two stairs.
	int ans = Climb_n(n-1) + Climb_n(n-2); 
	
	return ans;
}

int main()
{
	int n;
	cout<<"Enter the number of stairs : ";
	cin>>n;
	cout<<"\nThe number of ways aare : "<<Climb_n(n);
	return 0;
}
