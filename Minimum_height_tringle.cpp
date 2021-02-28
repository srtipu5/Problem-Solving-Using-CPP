#include<iostream>
using namespace std;
int main()
{
    int height,base,area;
    cin>>base>>area;
    height = (2*area)/base;
    if(area == (base*height)/2)
        cout<<height;
    else
        cout<<height+1;
    return 0;
}
