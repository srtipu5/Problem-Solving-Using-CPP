#include<iostream>
using namespace std;
int main()
{
    int t,n,k,i,j,a[1000],sum=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        for(j=0;j<n;j++){
            if(a[j]<=0){
                sum+=1;
            }
        }
        if(sum>=k){
            cout<<"NO"<<endl;
            sum = 0;
        }
        else
            cout<<"YES"<<endl;
            sum = 0;
    }
    return 0;
}
