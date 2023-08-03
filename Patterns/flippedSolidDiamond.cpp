#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <n-i ;j++){
            cout << "*";
        }
        for(int p = 0; p<(i*2)+1; p++){
                    cout << " ";
        }
        for(int j =0 ; j< n-i;j++){
             cout << "*";
        }
        cout<< endl;
    }
    for(int i = n; i >0; i--){
        for(int j = 0; j <n-i+1 ;j++){
            cout << "*";
        }
        for(int p = 0; p<(i*2)-1; p++){
                    cout << " ";
        }
        for(int j =0 ; j< n-i+1;j++){
             cout << "*";
        }
        cout<< endl;
    }

    
    return 0;
}
