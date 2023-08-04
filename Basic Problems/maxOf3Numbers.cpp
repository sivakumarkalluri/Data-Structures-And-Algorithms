#include <iostream>
using namespace std;

int main() {
    
    int a,b,c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    
    int res = (a > b && a > c) ? a: b > c ? b:c;
    cout <<" Largest of " <<a << ", " << b << ", "<< c << " is " << res;


    return 0;
}
