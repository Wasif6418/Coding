#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);

    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]= str[i]+32;
        }
    }
    cout<<str<<endl;
}
