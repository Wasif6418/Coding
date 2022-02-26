#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i] = 0;
    }

    for(int i=0;i<n.size();i++)
    {
        freq[n[i]-'a']++;
    }
    char ans = 'a';
    int maxf = 0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxf)
        {
            maxf=freq[i];
            ans = i+'a';
        }
    }
    cout<<maxf<<" "<<ans<<endl;
}

