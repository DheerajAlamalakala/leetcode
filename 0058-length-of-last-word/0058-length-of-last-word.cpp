class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size() - 1;
        int ch = 0;
        for( int i = len ; i>= 0 ; i--)
        {
            if(s[i] != ' ')
            ch++;
            else if( ch > 0 && s[i] == ' ')
            break;
        }
        return ch;

    }
};