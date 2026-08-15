class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XORsum = 0;
        for(int i =1; i< nums.size() + 1 ; i++)
        XORsum ^= i;
        for(int num: nums)
        XORsum ^= num;
        return XORsum;
    }
};