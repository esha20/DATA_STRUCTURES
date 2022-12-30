#include<stack>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
    vector <int> NextSmallerElement(vector<int>heights, int n){
        stack <int> s;
        s.push(-1);
        vector<int>ans(n);
        for(int i =n-1;i>=0;i--){
            while(s.top()!=-1 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);      //pushing the index
        }
        return ans;
    }
    vector<int> PrevSmallerElement (vector<int> heights , int n){
        stack<int> s;
        s.push(-1);
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            while(s.top()!=-1 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>next(n);
        next = NextSmallerElement(heights, n);

        vector<int>prev(n);
        prev = PrevSmallerElement(heights , n);

        int area = INT_MIN;
        for(int i=0;i<n;i++){
            int l = heights[i];
            if(next[i]==-1){
                next[i]=n;      //ek bhi chota nahi hai toh sare bars include kar do 
            }
            int b= next[i]-prev[i]-1;
            int newarea = l*b;
            area= max(area,newarea);
        }
        return area;
    }
};