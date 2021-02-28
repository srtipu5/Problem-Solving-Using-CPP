#include<iostream>
using namespace std;
int main()
{
   int n,a[100],i,reminder,difference;
   cin>>n;
   for(i=0;i<n;i++){
    cin>>a[i];
   }
    for(i=0;i<n;i++){
            if(a[i]<38)
            a[i]=a[i];
    else
    {
        reminder = a[i]/5;
        difference = (reminder+1)*5-a[i];
        if(difference<3)
            a[i]=a[i]+difference;
        else
            a[i]=a[i];
    }
   }
   for(i=0;i<n;i++){
    cout<<a[i]<<endl;
   }
   return 0;
}
