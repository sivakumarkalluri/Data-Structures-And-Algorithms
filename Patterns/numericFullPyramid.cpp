#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n-i-1)*2 ;j++){
            cout << " ";
        }
        int j;
        for(j=0; j <i+1; j++){
            cout << i+j+1<< " ";
        }
        for(int k = 0; k < i; k++){
            cout << (2*i)-k<< " ";
        }
        cout << endl;
    }

    
    return 0;
}
