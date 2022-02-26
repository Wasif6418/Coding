#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,high,low,flag;
    cout<<"First low then high:";
    cin>>low>>high;
    cout<<"Those numbers are"<<endl;
    while(low<high)
    {
        flag=0;
        if(low<=1)
            {
                ++low;
                continue;
            }
        for(i=2;i<=low/2;++i)
        {
            if(low%i==0){
                flag=1;
            break;
        }
        }
        if(flag==0)

            cout<<low<<endl;
            ++low;



    }
}
