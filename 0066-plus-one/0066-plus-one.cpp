class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int n = digits.size() - 1; n >= 0; n--) {
            if (digits[n] < 9){
                digits[n]++;
                return digits;
            }
            else {
                digits[n] = 0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};