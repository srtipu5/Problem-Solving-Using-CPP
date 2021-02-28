#include<iostream>
using namespace std;
class student
{
  public:
      int roll;
      double cgpa;
      student(int x,double y){
      roll =  x;
      cgpa = y;
      }
      void showresult(){
      cout<<roll<<"  "<<cgpa<<endl;
      }

};
int main()
{
    student tipu(15063,3.03);
    student asif(15045,3.53);
    tipu.showresult();
    asif.showresult();
}
