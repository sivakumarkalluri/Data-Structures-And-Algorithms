#include <iostream>
using namespace std;

int main() {
   
    int n,result=0,rem;

    cout << "Enter the number : ";
    cin >> n;
    int temp = n;
    while(temp > 0){
        rem = temp % 10;
        result = result*10 + rem;
        temp = temp / 10;
    }
    cout << "Reverse of " << n << " is " << result;
    
    return 0;
}
