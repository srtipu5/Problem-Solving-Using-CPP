#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int *sum,*abs;
    int x,y,z,a,b;
    cin>>x;
    cin>>y;
    z = x+y;
    sum = &z;
    a = x-y;
    b = fabs(a);
    abs = &b;

    cout<<*sum<<endl;
    cout<<*abs<<endl;

    return 0;


}
