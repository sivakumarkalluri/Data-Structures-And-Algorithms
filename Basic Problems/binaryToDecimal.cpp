#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int n;
    cout << "Enter the binary number : ";
    cin >> n;
    
    int ans = 0,rem,i=0;
    while(n != 0){
        rem = n % 10;
        ans += rem*pow(2,i++);
        n = n / 10;
    }
    cout << ans;

    return 0;
}
