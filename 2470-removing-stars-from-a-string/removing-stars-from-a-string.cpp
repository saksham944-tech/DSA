class Solution {
public:
    string removeStars(string s) {
        string hehe;
        for(const char c :s){
            if(c == '*'){
                hehe.pop_back();
            }else{
                hehe.push_back(c);
            }
        }
        return hehe;
    }
};