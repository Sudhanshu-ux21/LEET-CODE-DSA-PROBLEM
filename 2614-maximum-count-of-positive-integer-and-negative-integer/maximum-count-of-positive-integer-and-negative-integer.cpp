class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                sum+=1;
            }
        
        }
        for(int j=0;j<n;j++){
            if(nums[j]<0){
                count+=1;
            }
        }
        if(sum>count){
            return sum;
        }
        else if(count>sum){
            return count;
        }
        else{
            return sum;
        }

        
    }
};