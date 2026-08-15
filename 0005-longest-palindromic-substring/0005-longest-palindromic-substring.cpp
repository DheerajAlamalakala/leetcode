class Solution {
public:
    string expandFromCenter(string s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1,right - left - 1);
    }
    string longestPalindrome(string s) {
    string longest = "";

    for (int center = 0; center < s.size(); center++) {
        string odd = expandFromCenter(s, center, center);
        string even = expandFromCenter(s, center, center + 1);

        if (odd.size() > longest.size()) longest = odd;
        if (even.size() > longest.size())  longest = even;
    }

    return longest;

    }
};