#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello how are you";
    // s.clear(); 
    s.resize(20, 'x');
    cout << s << endl;
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    return 0;
}