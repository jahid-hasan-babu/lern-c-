#include<iostream>
#include<algorithm>
using namespace std;

int main (){
    int a, b;
    cin >> a >> b;
    cout << min({ 1, 5, 50, 45}) << endl;
    cout << max(a,b) << endl ;

    swap(a,b);
    cout << a << "" << b << endl ;
    return 0;
}