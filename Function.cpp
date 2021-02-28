
#include <iostream>

using namespace std;
void Max_of_four(int p,int q, int r, int s){
if(p>q&&p>r&&p>s)
    cout<<p<<endl;
  else if(q>p&&q>s&&q>r)
     cout<<q<<endl;
  else if(r>p&&r>s&&r>q)
     cout<<r<<endl;
    else
         cout<<s<<endl;
    }
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    Max_of_four(a,b,c,d);


    return 0;
}

