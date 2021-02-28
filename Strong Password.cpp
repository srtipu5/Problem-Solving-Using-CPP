#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,num = 0,low_num = 0,up_num = 0,special_num = 0;
    cin>>n;
    char s[100];
    for(i=0;i<n;i++){
        cin>>s[i];
        }
         for(i=0;i<n;i++){
             if(s[i]='0'||'1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'){
                num+=1;
             }
             else if(s[i]>=65&&s[i]<=90){
                up_num+=1;
             }
            else if(s[i]>=97&&s[i]<=122){
                low_num+=1;
             }
             else if(s[i] = '!'||'@'||'#'||'$'||'%'||'^'||'&'||'*'||'('||')'||'-'||'+')
             special_num+=1;
        }
        cout<<num<<endl;
          cout<<up_num<<endl;
          cout<<low_num<<endl;
          cout<<special_num<<endl;

}
