#include<bits/stdc++.h>
using namespace std;
void inc(int *a)
{
    (*a)++;
}
int main()
{
    int a=2;

    inc(&a);

    cout<<a<<endl;

}

