class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int start = 0;
        int n = nums.size();
        unordered_map<int,int> mp;
        int ans = 0;
        for(int i = 0; i<n ;i++)
        {
            while(i<n && mp[nums[i]] <= k)
            {
                mp[nums[i]]++;
                if(mp[nums[i]] > k)
                {
                    mp[nums[i]]--;
                    break;
                }
                i++;
            }
            i--;
            ans = max(ans,i+1 - start);
            int check = i+1;
            if(check == n) check--;
            while(start <  n && mp[nums[check]] == k){
                mp[nums[start]]--;
                start++;
            }
        }
        return ans;
    }
};