class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        if (nums.empty()) return 0; // Proteção contra vetor vazio

        sort(nums.begin(), nums.end());
        
        int esquerda = 0;
        int direita = nums.size() - 1;
        int resposta = 0;

        while(esquerda < direita){
            int soma = nums[esquerda] + nums[direita];
            
            if(soma == k){
                resposta++;
                esquerda++;
                direita--;
            } else if(soma < k){
                esquerda++;
            } else {
                direita--;
            }
        }
        return resposta;
    }
};