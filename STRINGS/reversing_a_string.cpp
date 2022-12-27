#include <iostream>
using namespace std;
int main()
{

	char s[10],s1[10];
	cout<<"Enter a string : ";
	cin>>s;
	int size =0;	
	for (int i=0;s[i]!='\0';i++)
	{
		size++;
	}
	for (int k=0;k<size;k++)
	{
		s1[k]=s[size-1-k];
	}
	cout<<s1;
	
return 0;
}

