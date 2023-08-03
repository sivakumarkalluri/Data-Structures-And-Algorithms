#include <iostream>
using namespace std;

bool checkPrime(int num){
    if(num == 0 || num ==1){
        return false;
    }
    for (int i = 2 ; i < num ; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
   
    int n,result=1;

    cout << "Enter the number : ";
    cin >> n;
    
    if (checkPrime(n)){
        cout << n << " is a Prime Number";
    }
    else{
        cout << n << " is not a Prime Number";

    }
    
    
    return 0;
}
