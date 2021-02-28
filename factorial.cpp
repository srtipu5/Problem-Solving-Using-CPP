#include<iostream>
using namespace std;
int main()
{
        int n,i,fact = 1;
        cout<<"Enter the number : ";
        cin>>n;
        if(n==0||n==1)
        {
            cout<<fact<<endl;
        }
        else
        {
            for(i=2; i<=n; i++)
            {
                fact = fact*i;
            }
            cout<<fact<<endl;
        }
        return 0;
    }

