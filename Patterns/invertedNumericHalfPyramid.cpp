#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = n; i > 0; i--){
        for(int j = 0; j < i ;j++){
            cout << (j+1)<<" ";
        }
        cout << endl;
    }

    
    return 0;
}