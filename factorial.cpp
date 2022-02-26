#include<bits/stdc++.h>
using namespace std;
 int fiboncchi(int n){

     int i,fact;
     fact=0;
     for(i=1;i<=n;i++)
     {
        fact=fact+i;

     }
    cout<<fact<<endl;
 }

int main()
{
    int n;
    cin>>n;
    fiboncchi(n);

 }

