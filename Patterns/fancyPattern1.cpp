#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (2*i)+1 ;j++){
            if(j != 0 && j % 2 != 0 ){
                cout<< "*";
            }
            else{
                cout << i+1;
            }
           
        }
        cout << endl;
    }
    
    for(int i = n-1; i >=0; i--){
        for(int j = 0; j < (2*i)+1 ;j++){
            if(j != 0 && j % 2 != 0 ){
                cout<< "*";
            }
            else{
                cout << i+1;
            }
           
        }
        cout << endl;
    }

    
    return 0;
}
