class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int max = nums[n-1]*nums[n-2];
        int min = nums[0]*nums[1];
        int res = max - min;
        return res;
    }
};