class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        somaTotal = 0
        tamanho = len(flowerbed)

        for i in range(tamanho):
            # 1. O espaço atual deve estar vazio
            if flowerbed[i] == 0:
                
                # 2. Verifica o vizinho da esquerda
                # É "seguro" se for o início (i == 0) OU se o anterior for 0
                esquerda_vazia = (i == 0) or (flowerbed[i - 1] == 0)
                
                # 3. Verifica o vizinho da direita
                # É "seguro" se for o fim (i == tamanho - 1) OU se o próximo for 0
                direita_vazia = (i == tamanho - 1) or (flowerbed[i + 1] == 0)

                if esquerda_vazia and direita_vazia:
                    flowerbed[i] = 1  # Planta a flor
                    somaTotal += 1
                    
                    # Se já plantamos o suficiente, podemos retornar True antes de acabar o loop
                    if somaTotal >= n:
                        return True

        return somaTotal >= n