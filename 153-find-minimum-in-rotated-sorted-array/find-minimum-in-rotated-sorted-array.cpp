class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();
        int k=nums[0];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
                if(nums[j]<nums[i]){
                  k=nums[i+1];
                
            }
        }
        return k;
    }
};