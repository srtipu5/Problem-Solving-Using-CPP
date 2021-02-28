#include<iostream>
using namespace std;
int main()

{

    int n,i,value[1000];

    cin>>n;

    for (i=0;i<n;i++){

        cin>>value[i];
    }

    for (i=n-1;i>=0;i--){

        cout<<value[i];
        cout<<" ";

    }

    return 0;
}
