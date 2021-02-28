#include<iostream>
using namespace std;

void max_num(int a[5]){
     int maximum;
     int i;
        maximum = a[0];
    for(i=1;i<5;i++){
        if(maximum>a[i])
            maximum = maximum;
        else
            maximum = a[i];
        }
        cout<<maximum;
}

 void min_num(int b[5]){
     int minimum;
     int j;
        minimum = b[0];
    for(j=1;j<5;j++){
        if(minimum>b[j])
            minimum = minimum;
        else
            minimum = b[j];
        }
        cout<<minimum;
}
int main()
{
    int p;
    int x[5],high,low;
    for(p=0;p<5;p++){
        cin>>x[p];
        }
        high = max_num(x[5]);
      low = min_num(x[5]);

}
