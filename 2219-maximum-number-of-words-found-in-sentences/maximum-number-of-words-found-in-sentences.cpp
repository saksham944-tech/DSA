class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maximum = 0;
        for(string s : sentences){
            int words = 1;
            for(char ch : s){
                if(ch == ' '){
                    words++;
                }
            }
            maximum = max(maximum, words);
        }
        return maximum;
    }
};