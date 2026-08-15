class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        unordered_map<char, char> match = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push_back(c);
            } else {
                if (st.empty()) return false;
                if (st.back() != match[c]) return false;
                st.pop_back();
            }
        }
        return st.empty();
    }
};