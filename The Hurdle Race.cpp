#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,a[100],big;
    int dif,s=0;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    big = a[0];
    for(i=1;i<n;i++){
        if(a[i]>big)
            big = a[i];
        else
            big = big;
    }
    dif = big - k;
    if(dif>0)
           {
            cout<<dif<<endl;
            }
        else
            cout<<s<<endl;
            return 0;

}
