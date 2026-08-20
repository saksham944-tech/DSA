class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size(), add = 0;
        for(int i=0; i<n; i++){
            add = add + nums[i];
            nums[i] = add;
        }
        return nums;
    }
};