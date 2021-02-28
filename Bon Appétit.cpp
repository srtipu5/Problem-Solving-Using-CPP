#include<iostream>
using namespace std;
int main()
{
    int n,index,a[100000],i,shared_bill,charged_bill,sum=0;
    cin>>n>>index;
    for(i=0;i<n;i++)
        cin>>a[i];
        cin>>charged_bill;
      for(i=0;i<n;i++){
        sum = sum + a[i];
      }
      shared_bill = (sum - a[index])/2;
      if(charged_bill == shared_bill)
        cout<<"Bon Appetit";
      else
      cout<<charged_bill-shared_bill;

}


