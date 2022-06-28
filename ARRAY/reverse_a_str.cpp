#include<bits/stdc++.h>
using namespace std;
int getLen(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
            count++;
    }
    return count++;
}
void rev(char name[], int length)
{
    int start=0, end= length-1;
    while (start<=end)
    {
        swap(name[start++], name[end--]);
    }
}
int main()
{
    char ch [20];
    cout<<"Enter the string : ";
    cin>>ch;

    int len = getLen(ch);
    cout<<"The reverse of the string is : ";
    rev(ch,len);
    cout<<ch;
    return 0;
}