#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);


    vector<int> v2 (3,50);
    swap(v,v2);

    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;
    for(auto element:v2){
        cout<<element<<" ";
    }

}
