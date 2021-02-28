#include<iostream>
using namespace std;
int main()
{
    int t,a[10],i,j,sum = 0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a[i];
        }
    for(i=0;i<t;i++){
    if(a[i]%2!=0){
       for(j=1;j<=a[i];j=j+2){
        sum = sum*2+2;
       }
       cout<<sum<<endl;
       sum = 0;
       }
    else {
       for(j=0;j<=a[i];j=j+2){
        sum = sum *2+1;
        }
        cout<<sum<<endl;
        sum=0;
    }
    }
    return 0;
}



