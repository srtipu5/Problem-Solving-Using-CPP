#include<iostream>
using namespace std;
int main()
{
    int n,i,a[1000],j;
    long long hand = 0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==1)
            hand = 0;
        else
        {
            for(j=1;j<a[i];j++){
                hand+=j;
            }
        }
        cout<<hand;
        cout<<endl;
        hand = 0;
    }
}
