#include<iostream>
using namespace  std;
int solveMeFirst(int a, int b);
int main()
{
    int num1,num2,Sum;
    cin>>num1;
    cin>>num2;
    Sum = num1+num2;
    Sum = solveMeFirst(num1,num2);
    cout<<Sum;

    return 0;
}
int solveMeFirst(int a, int b){
     int sum = a+b;
     return sum;
}
