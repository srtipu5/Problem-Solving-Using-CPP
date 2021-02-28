#include<iostream>
using namespace std;
int main()
{
  int n,a[100],i,sum1=0,sum2=0,sum3=0;
  double x,y,z;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
      for(i=0;i<n;i++){
            if(a[i]==0)
            sum1+=1;
      else if(a[i]>0)
        sum2+=1;
      else
        sum3+=1;}
        x = (double)sum1/n;
        y = (double)sum2/n;
        z = (double)sum3/n;
        cout<<fixed;
        cout<<y<<endl;
        cout<<z<<endl;
        cout<<x<<endl;
}
