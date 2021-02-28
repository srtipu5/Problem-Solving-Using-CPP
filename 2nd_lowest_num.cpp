#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,sum = 0,a[1000],small;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(j=0; j<k; j++)
    {
        small = a[0];
        for(i=1; i<n; i++)
        {
            if(small<a[i])
            {
                small = small;
            }
            else
                small = a[i];
        }
        cout<<small<<endl;
    }
}
