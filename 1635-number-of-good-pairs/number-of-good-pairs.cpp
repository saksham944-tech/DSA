class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int hakuna = 0, matata[101]={0};
        for(int& num: nums){
            hakuna = hakuna + matata[num];
            matata[num]++;
        }
        return hakuna;
    }
};