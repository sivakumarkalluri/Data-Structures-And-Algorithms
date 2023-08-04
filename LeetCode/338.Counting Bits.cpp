class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output;
        for(int i = 0; i <= n; i++) {
            int res = 0;
            int temp = i;
            while(temp != 0){
                if(temp & 1 ){
                    res++;
                }
                temp = temp >> 1;
            }
            output.push_back(res);
        }
        return output;
    }
};