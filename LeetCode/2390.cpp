class Solution {
public:
    string removeStars(string s) {
        vector<char> pilha;
        for(int i = 0; i < s.size(); i++){
            if('*' == s[i]){
                pilha.pop_back();
            }else{
                pilha.push_back(s[i]);
            }
        }
        return string(pilha.begin(), pilha.end());
    }
};