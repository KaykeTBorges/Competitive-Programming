class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int contadorZero = 0;
        // melhor usar valores inteiros para percorrer
        int esquerda = 0;
        int direita = 0;
        int tamanho = nums.size();
        int maximo = 0;
        int temp;

        // vai precisar de dois loops
        while(direita < tamanho){
            // confere se é o valor atual é zero para o incremento
            if(nums[direita] == 0) contadorZero++;

            // entramos no loop while se contador for maior que o (K)
            // e vamos diminuir a janela da esquerda, até sair o zeros necessários
            while(contadorZero > k){
                if(nums[esquerda] == 0) contadorZero--;
                esquerda++;
            }

            // calcula ainda com os zeros inclusos na janela de deslize
            temp = direita - esquerda + 1;
            if(temp > maximo){
                maximo = temp;
            }

            // ao final incrementa a direita de percorrer
            direita++;
        }
        return maximo;
    }
};