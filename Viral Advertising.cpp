#include<iostream>
using namespace std;
int main()
{
    int n,i,shared=5,liked,Cumulative=0;
    cin>>n;
    for(i=1;i<=n;i++){
        liked = shared/2;
        shared = liked*3;
        Cumulative = Cumulative+liked;
    }
    cout<<Cumulative<<endl;
    return 0;

}
