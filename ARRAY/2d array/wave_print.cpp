#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows, cols;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;

    int arr[rows][cols];
    //taking input for the matrix
    cout<<"Enter the elements in the array : ";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }

    //wave print
    for(int j=0;j<cols;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<rows;i++)
            cout<<arr[i][j];
        }
        else{
            for(int i=rows-1;i>=0;i--)
            cout<<arr[i][j];
        }
    }
    return 0;
}