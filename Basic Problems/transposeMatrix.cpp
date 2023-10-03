#include <iostream>
#include<limits.h>
using namespace std;

void transposeMatrix(int arr[][3], int size,int transpose[][3]){
     for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
             transpose[j][i] =  arr[i][j];
        }
        
    } 

}

int main() {
    

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int transpose[3][3];
    transposeMatrix(arr,3,transpose);

    cout << " ******** After transposing ******** " <<endl;
    
     for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
             cout << transpose[i][j] <<" ";

        }
        cout<<endl;
    } 
    return 0;
}
