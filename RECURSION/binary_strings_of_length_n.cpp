#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void binString(int n, int arr[], int i)
{
	if (i == n) {
		print(arr, n);
		return;
	}
	arr[i] = 0;
	binString(n, arr, i + 1);
	arr[i] = 1;
	binString(n, arr, i + 1);
}
int main()
{
	int n;  cin>>n;
	int arr[n];
	binString(n, arr, 0);
	return 0;
}