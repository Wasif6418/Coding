#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i,j;
    for(i=1;i<=n;i++)
    {
        cin>>arr[n];
    }
    cout<<endl;

    for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(arr[i]==arr[j])
                   {
                       cout<<arr[i]<<" \n";
                   }
            }
        }
}
