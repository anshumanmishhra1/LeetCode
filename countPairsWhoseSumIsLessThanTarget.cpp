class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]<target){
                    count++;
                }
            }
        }
        return count;
    }
};


/*📌Using Binary Search */
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i=0;
        int j;

        int count = 0;
        while(i<nums.size()){
            j=i+1;
            while(j<nums.size()){
                if(nums[i]+nums[j]<target){
                    count++;
                }
                j++;
            }
            i++;
        }
        return count;
    }
};