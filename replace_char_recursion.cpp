#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
void replacee(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<3.14;
        replacee(s.substr(2));
    }
    else
    {
       cout<<s[0];
       replacee(s.substr(1));

    }
}

int main()
{
    string s;
    cin>>s;
    replacee(s);
}
