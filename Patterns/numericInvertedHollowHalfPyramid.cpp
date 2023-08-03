#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = n; i >0; i--){
        if(i==n ){
            for(int j = 0; j < n ; j++){
                cout << j+1<< " ";
            }
        }
        else if(i==1){
            cout << n;
        }
        else{
            for(int j = 0; j < (2*i)-1; j++){
                if( j == 0){
                    cout << (n-i+1);
                }
                else if (j == (2*i)-2){
                    cout << n;
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    
    return 0;
}
