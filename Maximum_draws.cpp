#include<iostream>
using namespace std;
int main()
{
    int n,i,a[1000],num_of_socks;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
          num_of_socks = a[i]+1;
        cout<<num_of_socks<<endl;
        }
    return 0;
}
