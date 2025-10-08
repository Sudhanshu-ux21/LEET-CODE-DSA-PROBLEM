class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) v1.push_back(0);
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) v1.push_back(1);
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] == 2) v1.push_back(2);
        }

        nums = v1; 
    }
};
