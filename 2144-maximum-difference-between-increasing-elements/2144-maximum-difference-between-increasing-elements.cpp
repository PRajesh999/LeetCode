class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int dmax = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int diff = nums[j] - nums[i];
                if (diff > dmax) {
                    dmax = diff;
                }
            }
        }
        if (dmax == 0) {
            return -1; 
        } else {
            return dmax;
        }
    }
};