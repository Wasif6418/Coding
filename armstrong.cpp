#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
//153 ta run hoy na
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit = n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    if(sum==originaln)
    {
        cout<<"Arm"<<endl;
    }
    else{
        cout<<"Not arm"<<endl;}
}
