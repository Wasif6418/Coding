#include <bits/stdc++.h>
using namespace std;


int missingnumberget(int arr[], int m)
{

	int total = (m + 1) * (m + 2) / 2;
	for (int i = 0; i < m; i++)
		total = total - arr[i];
	return total;
}


int main()
{
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
        cin>>arr[i];
	}
	int m = sizeof(arr) / sizeof(arr[0]);
	int miss = missingnumberget(arr, m);
	cout << miss;
}









