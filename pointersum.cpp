#include<iostream>
using namespace std;
int main()
{
    int a,b,s;
    int *p1,*p2,*sum;
    cout<<"Enter 1'st No: ";
    cin>>a;
    cout<<"Enter 2nd No: ";
    cin>>b;
    p1 = &a;
    p2 = &b;
    s = *p1+*p2;
    sum = &s;
    cout<<"The Sum is: "<<*sum<<endl;
}
