class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1,carry = 0;
        string result = "";
        int bitA, bitB , sum ;
        while(i >= 0 || j >= 0 || carry != 0 )
        {
            bitA = 0,bitB = 0;
            if(i >= 0){
                bitA = a[i] - '0';
                i--;
            }
            if(j >= 0){
                bitB = b[j] - '0';
                j--;
            }
            sum = bitA + bitB + carry;
            result += (sum % 2) + '0';
            carry = sum / 2;
            
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};