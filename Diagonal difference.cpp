#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0,j=0,a[100][100],sum1=0,sum2=0,dif,abs;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        sum1+=a[i][i];
    }
    for(i=0;i<n;i++){
        sum2+=a[i][n-1-i];
    }
    dif=(sum1-sum2);
    abs = fabs(dif);
    cout<<abs;

 return 0;
}
