#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
    int n,i,sum = 1;
    getline(cin,s);
    n = s.length();    //string_length
    for(i=0;i<=n;i++){
        if(s[i]>=65&&s[i]<=90)
            {
              sum+=1;
            }
    }
    cout<<sum<<endl;
    return 0;
}
