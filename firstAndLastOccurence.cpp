class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        int n = nums.size();
        int lo =0;
        int hi = n-1;
        ans[0] = -1;
        ans[1] = -1;
        //first occurence
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(nums[mid]==target){
                if(mid==0){
                    ans[0] = mid;
                    break;
                }
                else if(nums[mid-1]!=target){
                    ans[0] = mid;
                    break;
                }
                else hi = mid-1;
            }
            if(nums[mid]>target) hi = mid-1;
            else if(nums[mid]<target) lo = mid + 1;
        }

        //last occurence
        lo = 0;
        hi = n-1;
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(nums[mid]==target){
                if(mid==n-1){
                    ans[1]=mid;
                    break;
                }
                else if(nums[mid+1]!=target){
                    ans[1] = mid;
                    break;
                }
                else lo = mid + 1;
            }
            if(nums[mid]>target) hi = mid-1;
            else lo = mid + 1;
        }
        return ans;
    }
};