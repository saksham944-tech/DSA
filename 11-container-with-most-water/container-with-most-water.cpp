class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxSum = 0, lp = 0, rp = n-1, h, w;
        while(lp < rp){
            w = rp - lp;
            h = min(height[lp], height[rp]);
            int area = h*w;
            maxSum = max(maxSum, area);
            if(height[lp] < height[rp]){
                lp++;
            }else{
                rp--;
            }
        }
        return maxSum;
    }
};