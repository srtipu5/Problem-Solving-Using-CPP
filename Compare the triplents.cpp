#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3],sum1=0,sum2=0,i,j;
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    for(j=0;j<3;j++){
        cin>>b[j];
    }
       for(i=0;i<3;i++){
        if(a[i]>b[i]){
            sum1+=1;
        }
        else if(a[i]<b[i]){
            sum2+=1;
        }
        else
        {
            sum1+=0;
            sum2+=0;
        }

       }
       cout<<sum1<<" "<<sum2;
 return 0;

}
