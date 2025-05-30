#include <bits/stdc++.h>
using namespace std;

class Student{
    public: 
        int roll;
        int cls;
        double gpa;

        Student(int roll, int cls, double gpa)
        {
            this->roll = roll; // (*this).roll = roll -> shortcut
            this->cls = cls;
            this->gpa = gpa;
        }
};

Student* fun(){
 Student* rahim = new Student(45, 10, 3.2);

 return rahim;
}

int main() {
   Student*  p = fun();
  
    cout << p->roll << " " << p->cls << " " << p->gpa;
    return 0;
}