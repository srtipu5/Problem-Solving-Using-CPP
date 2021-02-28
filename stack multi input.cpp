#include<bits/stdc++.h>
using namespace std;
void min_num(stack <int> st){
      int small,i,p;
      small = st.top();
      st.pop();
      p = st.size();
      for(i=p;i>0;i--){
        if(small<=st.top()){
            small = small;
            st.pop();
        }
        else
        {
          small = st.top();
          st.pop();
        }
      }
      cout<<small<<endl;

}

int main()
{
    stack <int> s;
    int n,k,i,x,sum = 0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        s.push(x);
    }
     min_num(s);

}
