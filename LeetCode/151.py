class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.strip()
        palavras = s.split()

        palavras.reverse()

        s_certo = " ".join(palavras)

        return s_certo