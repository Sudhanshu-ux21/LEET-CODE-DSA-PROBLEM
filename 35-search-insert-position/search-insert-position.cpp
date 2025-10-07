class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1){
            if(nums[0]>=target)
            return 0;
            else if(nums[0]<target){
                return 1;
            }
        }
        for(int i=1;i<n;i++){
             if(nums[0]>=target) return 0;
            if(nums[i]>=target && nums[i-1]<target){
                return i;
            }
            else if(target>nums[n-1]){
                return n;
            }
             
        }
        return nums[n-1];
    }
};