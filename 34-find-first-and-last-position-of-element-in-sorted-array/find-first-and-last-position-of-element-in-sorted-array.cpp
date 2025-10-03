class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v1(2, -1); // initialize with {-1, -1}
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) {
                if(v1[0] == -1) {
                    v1[0] = i; // first index
                }
                v1[1] = i; // keep updating last index
            }
        }
        return v1;
    }
};
