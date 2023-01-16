/*
Finding all the permutations of the string using recurrsions.
*/
#include<bits/stdc++.h>
using namespace std;
void per(int n, int i, string str, string substr){
    if(i==n){
        cout<<substr<<endl;;
        return;
    }
    per(n,i+1,str,substr);
    substr+=str[i];
    per(n,i+1,str,substr);
}
int main(){
    string str;
    cout<<"Enter the string : "<<endl;
    cin>>str;
    int n = str.size();
    string substr;
    cout<<"All the possible permutations of the string are  : " <<endl;
    per(n, 0,str,substr) ;
    return 0;
}