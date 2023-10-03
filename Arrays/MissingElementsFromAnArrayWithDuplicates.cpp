#include <iostream>
# include<bits/stdc++.h>
using namespace std;

int find(vector<int> &nums){
    for(int i = 0; i < nums.size(); i++) {
        if(nums[abs(nums[i]-1)]>0){
            nums[abs(nums[i]-1)] = - nums[abs(nums[i]-1)];
        }
    }
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]>0){
            return i+1;
        }
    }
    return -1;
}

int main() {
    
   vector<int> nums ={1,2,5,4,4};
   cout << find(nums) ;
    
    return 0;
}
