#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;
    int k=1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <i+1 ;j++){
            cout << k++<< " ";
        }
        cout << endl;
    }

    
    return 0;
}
