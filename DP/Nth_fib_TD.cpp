//used the recursion + memoisation (top down approach)
#include<bits/stdc++.h>
using namespace std;
int fib(int n, vector<int> &dp){
    if (n==0||n==1){
        return n;
    }
    //step 3
    if(dp[n]!=-1)
        return dp[n];
    //step 2
    dp[n]=fib(n-1 ,dp)+fib(n-2 ,dp);
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter the number in fibonacci series : ";
    cin>>n;
    //step 1
    vector<int> dp(n+1);

    for(int i=0;i<=n;i++){
        dp[i]=-1;
    }
    //if we want to print the entire series,
    // for(int i=0;i<n;i++)
    // cout<<fib(i,dp)<<endl;

    //if we wish to just print the nth number in fibonacci series
    cout<<fib(n,dp)<<endl;
    
    return 0;
}