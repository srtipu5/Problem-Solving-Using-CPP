#include<iostream>
using namespace std;
int main()
{
    int n,t,k,i,j,a[100000],small,sum = 0,z;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n>>k;
        for(j=0; j<n; j++)
        {
            cin>>a[j];
        }
        small = a[0];
        for(j=1; j<n; j++)
        {
            if(a[j]<small)
            {
                small = a[j];
            }
            else
                small = small;
        }
        for(z = small; z<k; z++)
        {
            sum+=1;
        }
        cout<<sum<<endl;
        sum = 0;
    }

}

