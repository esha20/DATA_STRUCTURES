#include<iostream>
using namespace std;


/*THIS PROBLEM CAN ALSO BE DONE WITH THE HELP OF LOOPS INSTEAD OF RECURSIONS. LIKE THIS :-

int fib (int n)
{
printf("Fibonacci series : ");
int t0=0,t1=1,i,s;
if(n<=1)
{
n=1?printf("%d",t0):printf("%d",t1);		
}
else
{
	printf("%d , %d ",t0,t1);
	for(i=2;i<n;i++)
	{
		s=t0+t1;
		t0=t1;
		t1=s;
		printf(", %d",s);
	}
}
} 
*/

int fib(int n)
{
	if (n==0 || n==1)
	return n;
	else
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	cout<<"Enter the number for which the fibonacci series is to be found : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<fib(i)<<" ";
	}
	return 0;
}
