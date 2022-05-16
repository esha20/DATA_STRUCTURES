#include <bits/stdc++.h>
using namespace std;
void print_n(int n)
{
	if (n<=0){
		cout<<"Invalid input.\n";
	}
	if (n==1)
	{
	cout<<1<<" ";
	}
	else{
	print_n(n-1);
	cout<<n<<" ";
	}	
}
int main(){
	cout<<"This program prints the natural numbers upto the range you want ! \n";
	int n;
	cout<<"Enter the number upto which you want to print : ";
	cin>>n;
	print_n(n);
	return 0;
}
