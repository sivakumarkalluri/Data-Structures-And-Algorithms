#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        
            for(int j = 0; j < n-i-1; j++){
            cout << " ";
            }
            if(i==0){
                cout << "*";
            }
            else{
                cout << "*";
                for(int p = 0; p<(i*2)-1; p++){
                    cout << " ";
                }
                cout << "*";
            }
        
        
        cout << endl;
    }
    for(int i = n; i > 0; i--){
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        if(i==1){
            cout << "*";
        }
        else{
            cout <<"*";
            for(int p = 0; p<((i-1)*2)-1; p++){
                    cout << " ";
                }
            cout <<"*";
        }
        cout << endl;
    }
    
    return 0;
}
