class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>v1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                v1.push_back(i);
            }
        }
        return v1;
    }
};