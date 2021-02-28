#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue <int> pq;
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        pq.push(i);
    }
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    cout<<pq.size();
}
