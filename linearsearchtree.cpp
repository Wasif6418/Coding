#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n, int x)
{
    int i;
    for(i=0;i<n;i++)
    {
      if (arr[i] == x)
        return i;
    }
    i=-1;
    return i;
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    int result;
    result = linear_search(arr,n,x);
    if (result != -1)
        cout<<"Available at index "<<result;
    else
        cout<<"Not Available";

}



