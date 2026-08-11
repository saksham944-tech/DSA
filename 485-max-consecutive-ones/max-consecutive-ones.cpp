class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currCount = 0;
        int maxCount = 0;
        for(int i : nums){
            if(i == 1){
                currCount++;
                if(currCount > maxCount){
                    maxCount = currCount;
                }
            }else{
                currCount = 0;
            }
        }
        return maxCount;
    }
};