#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i ; j++){
            cout << "  ";
        }
        for(int k = i; k <= (2 * i)-1; k++){
            cout << k<< " ";
        }
        for(int p = (2 * i)-2; p >= i; p--){
            cout << p<< " ";
        }
        cout << endl;
    }

    
    return 0;
}
