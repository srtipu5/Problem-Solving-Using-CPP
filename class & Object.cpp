#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double cgpa;
    void showResult()
    {
        cout<<"This is my info: "<<endl;
    }

};

int main ()
{
    student tipu,asif;
    tipu.id = 15063;
    tipu.cgpa = 3.03;
    asif.id = 15045;
    asif.cgpa = 3.53;
    tipu.showResult();
    cout<<tipu.id<< "  "<<tipu.cgpa<<endl;
    asif.showResult();
    cout<<asif.id<< "  "<<asif.cgpa<<endl;

}
