//used the bottom up method of dp for this fibonacci series nth number.
#include<bits/stdc++.h>
using namespace std;
int fib(int n, vector<int> &dp)
{
    dp[0]=0;dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}
/*
FOR SPACE OPTIMISATION THE SAME CODE CAN BE CHANGED TO O(1) SPACE COMPLEXITY 
int fib(int n)
{
    int prev1=0 , prev2=1;
    int current=0;
    for(int i=2;i<=n;i++){
        current = prev1+prev2;
        prev1 = prev2;
        prev2= current;
    }
    return current;
}

*/
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1);
    for(int i=0;i<n;i++){
        dp[i]=-1;
    }
    cout<<fib(n,dp)<<endl;
    return 0;
}