#include<iostream>
using namespace std;
int main()
{
    int n,i,a[1000],min_value,max_value,min_total=0,max_total=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max_value = a[0];
    for(i=1;i<n;i++){
        if(a[i]>max_value)
           {
            max_total+=1;
            max_value = a[i];
           }
           else
            max_value = max_value;
    }
    min_value = a[0];
    for(i=1;i<n;i++){
        if(a[i]<min_value){
            min_total+=1;
            min_value = a[i];
            }
            else
                min_value = min_value;
    }
    cout<<max_total;
    cout<<" ";
    cout<<min_total;

}
