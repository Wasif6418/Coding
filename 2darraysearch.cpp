#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }


   /* for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } */

    int x;
    cin>>x;

    bool found=false;
    int r=0;int c=m-1;
    while(r<n and c >=0)
    {
        if(arr[r][c]==x)
        {
            found=true;
        }
        if(arr[r][c]<x)
        {
            r++;
        }
        else
        {
            c--;
        }

    }

    if(found)
    {
        cout<<"Found"<<endl;
    }
    else
        {cout<<"Not found"<<endl;}
}
