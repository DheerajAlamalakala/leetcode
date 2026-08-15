class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> op;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            op.push_back(nums1[i++]);
            else
            op.push_back(nums2[j++]);
        }
        while(i<nums1.size())
        op.push_back(nums1[i++]);
        while(j<nums2.size())
        op.push_back(nums2[j++]);
        int size = op.size();
        if(size%2 != 0)
        return (double)op[(size)/2];
        else
        return (op[size/2]+op[size/2 - 1])/(double)2;
    }
};