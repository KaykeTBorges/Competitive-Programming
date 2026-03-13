class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        # array de tamanho igual ao nums
        resultado = [0] * n

        # não tem nenhum valor a esquerda, no começo
        resultado[0] = 1

        for i in range(1, n):
            # primeiro acumulamos o valor das multiplicações a esquerda, para depois colocar os valores da direita, em outro for
            # começa do indice 1
            # o indice 1 sempre será 1 * o primeiro numero do vetor
            resultado[i] = resultado[i-1] * nums[i-1]
            
        # começa do mesmo jeito da esquerda, não existe valores a direita, o primeiro já é o mais extremo
        acumulado_direita = 1

        for i in range(n-1, -1, -1):
            # aqui os valores que foram acumulados são multiplicados pela parte a direita
            resultado[i] = resultado[i] * acumulado_direita

            acumulado_direita = acumulado_direita * nums[i]
        
        return resultado