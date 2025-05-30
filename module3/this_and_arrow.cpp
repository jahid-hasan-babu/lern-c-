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

int main() {
    Student rahim(45, 10, 3.2);
  
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa;
    return 0;
}