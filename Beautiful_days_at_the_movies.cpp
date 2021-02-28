#include<iostream>
#include<math.h>
using namespace std;
int Reverse_Number(int number){
     int reminder,rev_num=0;
     while(number!=0)
        {
        reminder = number%10;
     rev_num = rev_num*10+reminder;
     number = number/10;
     }
     return rev_num;
}
int main()
{
    int a,b,k,i,reverse_num,gap,sum=0;
    cin>>a>>b>>k;
    for(i=a;i<=b;i++){
        reverse_num = Reverse_Number(i);
        gap = fabs(i-reverse_num);
        if(gap%k==0){
            sum+=1;
        }
    }
    cout<<sum<<endl;
    sum = 0;
    return 0;


}
