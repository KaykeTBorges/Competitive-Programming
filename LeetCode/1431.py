class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        # peguei o maior valor dentro da lista de candies, tem função python para isso
        # depois percorri a lista comparando se quando eu somasse com o valor de extra candies, ia ser o maior de todos ou não
        # assim eu colocaria na lista o true or false com append na lista (adiciona ao final)
        maior_numero = max(candies)
        lista_resposta = []

        for num in candies:
            valor = num + extraCandies
            if valor < maior_numero:
                lista_resposta.append(False)
            else:
                lista_resposta.append(True)

        return lista_resposta
