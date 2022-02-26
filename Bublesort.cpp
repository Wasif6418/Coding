#include<bits/stdc++.h>
using namespace std;
int buble_sort(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    buble_sort(arr,n);
     for(i=0;i<n;i++)
    {
        cout<<arr[j+1];
    }
}
