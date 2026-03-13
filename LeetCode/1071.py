import math

class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        # vou pegar pelo tamanho do array, e ver como dividi-lo pelo menor valor entre os dois, pelo tamanho é melhor
        if str1 + str2 == str2 + str1:
            mdc = math.gcd(len(str1), len(str2))
            resposta = str1[0:mdc]
            return resposta

        else: 
            return ""