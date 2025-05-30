#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        char name[100];
        int roll;
        double gpa;
};
int main() {

    Student a, b;
    // cin >> a.name >> a.roll >> a.gpa;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    // getchar(); // To consume the newline character left by previous input
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;
    

    cout   << a.name << " " << a.roll << " " << a.gpa << endl;
    cout   << b.name << " " << b.roll << " " << b.gpa << endl;
    
    return 0;
}