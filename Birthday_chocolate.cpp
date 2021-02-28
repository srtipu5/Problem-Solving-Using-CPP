#include<iostream>
using namespace std;
int main()
{
    int n,i,j,m,d,a[100],sum = 0,num_of_chocolate=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>d>>m;
    if(n==1){
        if(a[0]==d)
        num_of_chocolate=1;
        else
        num_of_chocolate=0;

    }
    else
      {

       for(i=0;i<n;i++){
       for(j=i+1;j<i+m;j++){
       sum = a[i];
       total = sum+

        if(sum == d){
            num_of_chocolate+=1;
        }
        else
          sum = 0;
       }
       sum = 0;
       }
      }
        cout<<num_of_chocolate;
}
