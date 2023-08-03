#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        char val='A';
        for(int j = 0; j < i+1 ;j++){
           
            cout << val;
            val++;
        }
        val--;
        for(int j = 0; j < i ;j++){
            val--;
            cout << val;
           
        }
        cout << endl;
    }

    
    return 0;
}
