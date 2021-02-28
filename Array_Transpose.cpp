#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,a[10][10],b[10][10];
    cin>>n;
    cin>>m;
    for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>a[i][j];
    }
    }
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        b[i][j] = a[j][i];
        cout<<b[i][j]<<" ";
    }
    cout<<endl;

    }

}
