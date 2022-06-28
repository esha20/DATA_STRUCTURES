#include<bits/stdc++.h>
using namespace std;
//consider only the numbers and the alphabets
bool checkpalin(char name[], int n)
{
int start=0, end=n-1 ;
while (start<=end)
{
    if(name[start]!=name[end]){
        return 0;
    }
    else{
        start++;
        end--;
    }
}
return 1;
}
int main()
{
    int n;
    cout<<"Enter the size of the string : ";
    cin>>n;
    char *str=new char[n];
    cin>>str;
    int len=0;
    for(int i=0;str[i]!='\0';i++)
    {
            len++;
    }
    cout<<"Palindrome or not : "<<checkpalin(str, len);
    return 0;
}