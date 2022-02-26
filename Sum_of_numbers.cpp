#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,temp;

    int maxsum=INT_MIN;
    int n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++)
        {int sum=0;
            for(k=i;k<=j;k++){
                    sum+=arr[k];
              }maxsum=max(maxsum,sum);


            }
            }
            cout<<maxsum<<endl;

}
