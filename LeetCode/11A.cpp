class Solution:
    def maxArea(self, height: List[int]) -> int:
        # a sacada desse problema é lembrar que ele é um retangulo 
        # então tem altura máxima entre duas linhas, sempre pega a menor, porque para fazer a altura de um retangulo, precisa ter o outro lado completo
        # depois faz a largura, que é a diferença dos indices
        # a sacada maior é o minimo entre as alturas, que pela imagem da pra ter a noção melhor
        # deu TIME LIMIT, então preciso resolver em O(n), dá pra fazer isso simplificando, usando while e ponteiros pré definidos
        tam = len(height)
        max_area = 0
        i = 0
        j = tam - 1

        while i < j:
            altura = min(height[i], height[j])
            largura = j - i
                
            retangulo = altura * largura

            max_area = max(max_area, retangulo)

            # isso dá certo, porque buscamos o maior valor de largura possivel, então sempre que o ultimo(J) for maior que o primeiro(I) continua o (J) para ve se consegue com essa largura, porque ela é a maior do array
            if height[i] <= height[j]:
                i += 1
            else: 
                j -= 1

        return max_area
        