class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        teste = ""
        aws = 0

        for car in s:
            if car not in teste:
                teste += car
            else:
                # antes de reiniciar, atualiza o tamanho máximo
                if len(teste) > aws:
                    aws = len(teste)
                # remove os caracteres até depois da repetição
                repet_index = teste.index(car)
                teste = teste[repet_index + 1:] + car  # mantém o que ainda é válido

        # verifica a última substring
        if len(teste) > aws:
            aws = len(teste)

        return aws