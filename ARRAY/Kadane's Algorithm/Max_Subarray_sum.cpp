// Problem Statement
// You are given an array of length n , consisting of integers. You have to find the sum of the subarray (including empty subarray) having maximum sum among all subarrays.
// A subarray is a contiguous segent of an array. In other words, a subarray can be formed by removing 0 or more integers from the beginning , and or 0 or more integers from the end of an array.

// NOTE:-
// The sum of an emp subarray is 0.

// INPUT FORMAT: 
// The first line of input contains the size of the array(no of integers in the array)
// The second line contains the integers of the array.


// OUTPUT FORMAT:
// The maximum subarray sum.


// Sample Input 1 :
// 9
// 1 2 7 -4 3 2 -10 9 1

// Sample Output 1 :
// 11

// Explanation For Sample 1 :
// The subarray yielding maximum sum is [1, 2, 7, -4, 3, 2].

// Sample Input 2 :
// 6
// 10 20 -30 40 -50 60

// Sample Input 2 :
// 60

// Sample Input 3 :
// 3
// -3 -5 -6

// Sample Input 3 :
// 0

//code:-
#include <bits/stdc++.h> 
int max(int maxsum, int sum){
    if(maxsum>sum)
        return maxsum;
    else
        return sum;
}
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long int sum=0, maxsum=0;
    for(int i=0;i<n;i++)
    {
            sum += arr[i];
            maxsum=max(maxsum,sum);
            if(sum<0)
                sum=0;
    }
    return maxsum;
}
