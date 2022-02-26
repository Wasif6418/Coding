#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void merge(int arr[], int l,int mid, int r)
{
    int left_length = mid-l+1;
    int right_length = r-mid;

    int a[left_length];
    int b[right_length];


    for(int i=0;i<left_length;i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0;i<right_length;i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0;
    int k=l;
    while(i<left_length && j<right_length){
    if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;i++;
        }
        else
        {
           arr[k]=b[j];
           k++;j++;
        }
    }

     while(i<left_length){
            arr[k]=a[i];
            k++;i++;
     }
     while(j<right_length){
        arr[k]=b[j];
           k++;j++;
     }

}

void mergesort(int arr[], int l, int r)
{
  if(l<r)
  {
       int mid=l+((r-l)/2);
       mergesort(arr,l,mid);
       mergesort(arr,mid+1,r);
       merge(arr,l,mid,r);
  }
}
int main()
{
    /*
    int arr[]={5 ,4,3,2,1}; //Auto input
    mergesort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    */
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
