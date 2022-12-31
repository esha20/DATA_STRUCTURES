//memoisation
#include <bits/stdc++.h>
using namespace std;
static int dp[1002][102];
// memset(dp,-1,sizeof(dp));
int max(int a, int b){
if(a>b)
    return a;
    
    return b;
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
// 	Write your code here
    memset(dp,-1,sizeof(dp));
    if(n==0||maxWeight==0){
        return 0;
    }
    if(dp[maxWeight][n]!=-1){
        return dp[maxWeight][n];
    }
    if(weight[n-1] > maxWeight){
        return dp[maxWeight][n]=knapsack(weight, value, n-1, maxWeight);
    }
    if(weight[n-1]<= maxWeight)
    {
        return dp[maxWeight][n] = max(value[n-1]+knapsack(weight, value, n-1, maxWeight-weight[n-1]), knapsack(weight, value,n-1,maxWeight));
    }
}
int main(){
    int n;
    cout<<"Enter the number of items : ";
    cin>>n;
    vector<int> weight(n);
    vector<int> value(n);
    int maxWeight;
    cout<<"Enter the capacity of the knapsack : ";
    cin>>maxWeight;
    cout<<"Enter the weight of the items : ";
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    cout<<"Enter the number of the items : ";
    for(int i=0;i<n;i++){
        cin>>value[i];
    }
    cout<<"The maximum profit is  : ";
    cout<<knapsack(weight, value, n, maxWeight)<<endl;
    return 0;
}