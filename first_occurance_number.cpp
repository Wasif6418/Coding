#include<bits/stdc++.h>
using namespace std;
int occurance(int arr[],int n,int i,int key)
{
    if(i==n){return false;}
    if(arr[i]==key){return i;}

    return occurance(arr,n,i+1,key);

}
int lastoc(int arr[],int n,int i,int key)
{
    if(i==n){return -1;}
    int restarray = lastoc(arr,n,i+1,key);
    if(restarray != -1){return restarray;}
    if(arr[i]==key){return i;}

}
int main()
{
    int n,i,key;
    cout<<"How many number to input:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array values:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Which one you want to find:"<<endl;
    cin>>key;
    cout<<occurance(arr,n,0,key)<<endl;
    cout<<lastoc(arr,n,0,key)<<endl;

}
