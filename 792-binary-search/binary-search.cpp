class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==target)
            return 0;
            else{
                return -1;
            }
        }
        int mid=n/2;
        if(nums[mid]>=target){
        for(int i=0;i<=mid;i++){
            if(nums[i]==target){
                return i;
             
            }
            // else{
            //     return -1;
            // }
            }
        }
        else if(nums[mid]<target){
            for(int i=mid;i<n;i++){
                if(nums[i]==target)
                return i;
                // else{
                //     return -1;
                // }
            }
        }
        
            return -1;
    
    }
};