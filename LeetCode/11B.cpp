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
            # 1. Calculamos a área com as paredes atuais
            altura_esq = height[i]
            altura_dir = height[j]
            
            largura = j - i
            altura = min(altura_esq, altura_dir)
            retangulo = altura * largura

            max_area = max(max_area, retangulo)

            # 2. Decidimos qual ponteiro mover e "saltamos" as paredes inúteis
            if altura_esq <= altura_dir:
                # Se a esquerda é menor, movemos o 'i'
                # Mas enquanto a nova parede for menor ou igual à que acabamos de usar, 
                # a área será menor (já que a largura está a diminuir). Então saltamos!
                while i < j and height[i] <= altura_esq:
                    i += 1
            else:
                # Fazemos o mesmo para o lado direito 'j'
                while i < j and height[j] <= altura_dir:
                    j -= 1

        return max_area
        