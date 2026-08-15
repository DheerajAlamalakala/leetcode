class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> window;
        int len = 0, left = 0;
        for(int right = 0;right<s.size();right++)
        {
            if(window.count(s[right]) && window[s[right]]>=left)
                left = window[s[right]]+1;
            window[s[right]] = right;
            len = max(len,right - left +1);

        }
        return len;
        
    }
};