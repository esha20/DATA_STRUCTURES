#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The next smaller element is : ";
    vector <int>ans(n);
    stack<int>s;
    s.push(-1);                 //pushing the default as -1;
    for(int i=n-1;i>=0;i--){
        while(s.top() >= arr[i]){
            s.pop();
        }
        ans[i]=s.top();
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    delete arr;
    return 0;
}