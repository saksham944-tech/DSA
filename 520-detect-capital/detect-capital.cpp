class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercase = 0;
        for(int i=0; i<word.length(); i++){
            if(isupper(word[i])){
                uppercase++;
            }
        }
        if(uppercase == word.length()){
            return true;
        }else if(uppercase == 0){
            return true;
        }else if(uppercase == 1 && isupper(word[0])){
            return true;
        }else{
            return false;
        }
    }
};