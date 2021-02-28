#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,a[100000],b[100000],c[100000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++){
        c[i] = a[i] + b[i];
        cout<<c[i]<<" ";
    }
   return 0;
}
