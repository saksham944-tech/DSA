class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n<4){
            return false;
        }
        int first = 0;
        while(first < n-2 && nums[first] < nums[first+1]){
            first++;
        }
        if(first == 0){
            return false;
        }
        int second = first;
        while(second < n-1 && nums[second] > nums[second+1]){
            second++;
        }
        if(second == first || second == n-1){
            return false;
        }
        int third = second;
        while(third < n-1 && nums[third] < nums[third+1]){
            third++;
        }
        return third == n-1;
    }
};