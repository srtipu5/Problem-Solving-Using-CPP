#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j,a[100],sum=0,total=0;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            sum = a[i]+a[j];
            if(sum%k==0){
                total+=1;
                sum = 0;
            }
            else
                sum = 0;
        }
    }
    cout<<total;
    return 0;
}
