#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prevnum= factorial(n-1);
    return n*prevnum;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}