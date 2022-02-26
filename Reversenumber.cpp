#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
//153 ta run hoy na
int main()
{
    int n;
    int reversenumber=0;
    cin>>n;
    while(n>0){
        int lastdigit = n%10;
        reversenumber=reversenumber*10 + lastdigit;
        n=n/10;
    }
    cout<<reversenumber<<endl;

}
