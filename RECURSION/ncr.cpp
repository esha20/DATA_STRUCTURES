#include<iostream>
using namespace std;


int combination(int n, int r)
{	if(r==0||r==n)
	return 1;
	return combination(n-1,r-1)+ ncr (n-1,r);
		
}

int main()
{
	int n,r;
	cout<<"Enter the values of n and r in ncr : ";
	cin>>n>>r;
	cout<<"The answer: "<<combination(n,r);

}
