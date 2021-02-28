#include<iostream>
using namespace std;
int main()
{
   int n,i,sum=0,value[1000];
   cin>>n;
   for(i=0;i<n;i++){
    cin>>value[i];
   }
   for(i=0;i<n;i++){
    sum = sum + value[i];
   }
   cout<<sum<<end;
   return 0;

}
