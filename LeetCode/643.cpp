class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int tam = nums.size();
        int i = 0;
        double soma_total = 0.0;
        double maior;
        while(i < k){
            soma_total += nums[i];
            
            i++;
        }
        maior = soma_total;
        while(i < tam){
            soma_total += nums[i] - nums[i-k];
            if(soma_total > maior){
                maior = soma_total;
            }
            i++;
        }
        return maior / k;
    }
};