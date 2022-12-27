#include<iostream>
using namespace std;

int main ()
{
	char s[20],a,b;
	cout<<"Enter a string : ";
	gets(s);
	cout<<"Enter the character to be replaced : ";
	cin>>a;
	cout<<"Enter the character it is to be replaced with : ";
	cin>>b;
	for (int i=0;s[i]!='\0';i++)
	{
		if (s[i]==a)
		{
			s[i]=b;
		}
	}
	cout<<"New string: "<<s;
	return 0;
}
