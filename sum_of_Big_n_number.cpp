#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j = 0,sum = 0,k;
    priority_queue <long long > pq;
    cin>>n>>k;
    long long a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        pq.push(a[i]);
    }
    while(j!=k)
    {
        sum = sum + pq.top();
        pq.pop();
        j++;
    }
    cout<<sum<<endl;

    return 0;
}
