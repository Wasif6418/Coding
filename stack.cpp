#include<bits/stdc++.h>
#include<iostream>
using namespace std

#define n 100

class stack
{
    int* arr;
    int top;

public:
    stack(){
    arr= new int[n];
    top=-1;}

void push(int n)
{
    if(top==n-1)
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    top++;
    arr[top] = x;
}
void pop()
{
    if(top==-1)
    {
        cout<<"No elements to pop"<<endl;
        return;
    }
   top--;
}
int Top()
{
    if(top==-1)
    {
        cout<<"No elements to stack"<<endl;
        return;
    }
    return arr[top];
}
bool empty()
{
    return top==-1;
}
};
int main()
{
    stack st;
    st.push(1);

}
