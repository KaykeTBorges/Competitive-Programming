class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int tamanho1 = word1.size();
        int tamanho2 = word2.size();

        if(tamanho1 == tamanho2){
            string aws;
            for(int i = 0; i < tamanho1; i++){
                aws += word1[i];
                aws += word2[i];
            }
            return aws;
        }
        else if(tamanho1 > tamanho2){
            string aws;
            for(int i = 0; i < tamanho1; i++){
                if(i < tamanho2){
                    aws += word1[i];
                    aws += word2[i];
                }
                else{
                    aws += word1[i];
                }
            }
            return aws;
        }
        else if(tamanho1 < tamanho2){
            string aws;
            for(int i = 0; i < tamanho2; i++){
                if(i < tamanho1){
                    aws += word1[i];
                    aws += word2[i];
                }
                else{
                    aws += word2[i];
                }
            }
            return aws;
        }
        return "";
    }
};