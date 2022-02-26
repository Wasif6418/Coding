#include<bits/stdc++.h>
using namespace std;
int binary_srch(int arr[],int n,int x)
{
    int low, high, mid;
    low=0;
    high = n-1;
    while(low <= high){
        mid = (low+high)/2;

    if(arr[mid]== x)
    {
        return mid;
    }
    if(arr[mid]<x)
        {
            low=mid+1;
        }
    else{
        high = mid -1;
        }
                       }
    return -1;
}
int main()
{
   int n,x,i,result;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cin>>x;
   result= binary_srch(arr,n,x);
   if(result != -1)
    cout<<"Found "<<result ;
   else
    cout<<"Not Found" ;

}
