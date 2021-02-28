#include<bits/stdc++.h>
using namespace std;
void min_num_sum(stack <int> st1)
{
    int small,i,j,k,p;
    stack <int> st2;
    small = st1.top();
    st1.pop();
    p = st1.size();
    for(i=p; i>0; i--)
    {
        if(small<=st1.top())
        {
            small = small;
            st2.push(st1.top());

        }
        else
        {
            small = st1.top();
            st2.push(small);
        }
        st1.pop();
        cout<< small<<endl;
        for(k=st2.size(); k>0; k--)
        {
            cout<<st2.top()<<endl;
            st2.pop();
        }
    }

}

int main()
{
    stack <int> s;
    queue <int> q;
    int n,k,i,j,x,sum;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        s.push(x);
    }
    min_num_sum(s);
}
