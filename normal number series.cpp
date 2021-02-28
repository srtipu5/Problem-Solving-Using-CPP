/*using loop
#include<iostream>
using namespace std;
int main()
{
    int n,i,sum = 0;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum = sum + i;
    }
    cout<<sum<<endl;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter the number : ";
    cin>>n;
    sum = (n*(n+1))/2;
    cout<<sum<<endl;
}
