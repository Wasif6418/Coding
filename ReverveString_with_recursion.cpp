#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
void reversee(string s)
{
    if(s.size() ==0)
    {
        return;
    }

    string last= s.substr(1);
    reversee(last);
    cout<<s[0];
}
int main()
{
    string s;
    cin>>s;
    reversee(s);

}
