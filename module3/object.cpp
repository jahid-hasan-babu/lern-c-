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

Student fun(){
 Student rahim(45, 5, 3.2);
 return rahim;
}

int main() {
   Student  obj = fun();
  
    cout << obj.roll << " " << obj.cls << " " << obj.gpa;
    return 0;
}