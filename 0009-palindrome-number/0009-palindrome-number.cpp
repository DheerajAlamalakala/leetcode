class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int original = x;
        long reversed = 0;
        int divisor = 10;


        while(x>0)
        {
            reversed = reversed*divisor + (x % 10);
            x /= 10;
        }


        return original == reversed;
    }
};