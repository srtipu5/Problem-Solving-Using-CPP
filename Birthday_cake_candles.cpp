#include<iostream>
using namespace std;
int main()
{
    int n,a[100000],i,max_value,total=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max_value = a[0];
    for(i=1;i<n;i++){
        if(max_value>a[i])
            max_value = max_value;
        else
            max_value = a[i];
    }
     for(i=0;i<n;i++){
        if(max_value == a[i])
            total+=1;
     }
     cout<<total;
     return 0;

}
