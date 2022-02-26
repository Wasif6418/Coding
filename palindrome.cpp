#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
    cin>>n;
    char arr[n+1];cin>>arr;

    bool check= 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i])
        {
            check=-1;
        }
    }
    if(check==0)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not palindrome"<<endl;

    }


}
