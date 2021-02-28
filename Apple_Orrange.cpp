#include<iostream>
using namespace std;
int main()
{
    int s,t,a,b,m,n,a1[100000],b1[100000],i,total1=0,total2=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(i=0;i<m;i++){
        cin>>a1[i];
    }
     for(i=0;i<n;i++){
        cin>>b1[i];
    }
    for(i=0;i<m;i++){
        a1[i] = a1[i]+a;
        if(a1[i]>=s&&a1[i]<=t)
            total1+=1;
        }
    for(i=0;i<n;i++){
        b1[i] = b1[i]+b;
        if(b1[i]>=s&&b1[i]<=t)
            total2+=1;
        }
        cout<<total1;
        cout<<endl;
        cout<<total2;
        cout<<endl;
        return 0;


}
