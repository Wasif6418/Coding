#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
void towerofhanoi(int n, char source, char dest, char helper)
{
    if(n==0)
    {
        return;
    }
    towerofhanoi(n-1, source,helper,dest);
    cout<<"Move to "<<source<<"to"<<dest<<endl;
    towerofhanoi(n-1,helper, dest,source);
}
int main()
{
    towerofhanoi(3,'A','C','B');
}
