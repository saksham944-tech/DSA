class Solution {
public:
    bool isPowerOfThree(int n) {
        int i = 0;
        while(true)
        {
            if(pow(3, i) == n){
                return true;
            }
            if(pow(3, i) < n){
                i++;
            }
            if(pow(3 ,i) > n){
                return 0;
            }
        }
    }
};