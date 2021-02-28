#include<iostream>
using namespace std;
class add
{
       int a,b,c;
       public:
       void input(){
       cout<<"Enter First value: ";
       cin>>a;
       cout<<"Enter 2nd value: ";
       cin>>b;
       }
       void sum()
       {
           c = a + b;
       }
       void output(){
       cout<<"The Sum Is : "<<c<<endl;
       }
};
int main()
{
    add obj;
    obj.input();
    obj.sum();
    obj.output();

}
