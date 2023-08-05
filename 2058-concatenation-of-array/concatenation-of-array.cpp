class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> xnums(2*n);
        for(int i=0;i<n;i++)
        {
            xnums[i]=nums[i];
            xnums[i+n] = nums[i];
        }
        return xnums;
    }
};