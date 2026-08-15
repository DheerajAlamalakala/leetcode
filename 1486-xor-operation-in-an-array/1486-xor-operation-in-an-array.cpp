class Solution {
public:
    int xorOperation(int n, int start) {
        int xor_res = 0,c =0;
        for(int i = start ; c < n ; i += 2){
            xor_res ^= i;
            c++;
        }
        return xor_res;
    }
};