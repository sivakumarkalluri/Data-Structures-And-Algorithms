#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n-i-1) ;j++){
            cout << " ";
        }
        if(i == 0 || i == n-1){
            for(int j = 0; j <i+1; j++){
                cout << j+1<< " ";
            }
        }
        else{
            cout << 1;
            for(int j = 0; j<(2*(i-1))+1; j++){
                cout <<" ";
            }
            cout << i+1;
        }
        cout << endl;
    }

    
    return 0;
}
