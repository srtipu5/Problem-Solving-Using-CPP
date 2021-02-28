#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,n,i,cat_A,cat_B;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        cat_A = fabs(c-a);
        cat_B = fabs(c-b);
        if(cat_A == cat_B)
            cout<<"Mouse C"<<endl;
        else if(cat_A < cat_B)
            cout<<"Cat A"<<endl;
         else
            cout<<"Cat B"<<endl;
    }
    return 0;

}
