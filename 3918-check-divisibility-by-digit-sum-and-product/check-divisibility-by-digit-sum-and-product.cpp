class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, product = 1, hakuna = n;;
        while(n>0){
            sum = sum + (n%10);
            product = product * (n%10);
            n = n/10;
        }
        int process = sum + product;
        if(hakuna % process == 0){
            return true;
        }
        return false;
    }
};