class Solution {
public:
    int reverse(int x) {
        long long reversed = 0;
        while(x != 0)
        {
            reversed = reversed*10 + (x%10);
            x /= 10;
        }
        if (reversed > INT_MAX || reversed < INT_MIN) return 0;
        return (int)reversed;    
    }
};