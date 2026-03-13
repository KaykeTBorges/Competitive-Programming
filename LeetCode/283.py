class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        zeros = nums.count(0)
        
        # 1. Filtra os itens para uma nova lista temporária (sua lógica)
        lista_sem_zeros = [item for item in nums if item != 0]
        
        # 2. Limpa a lista original (in-place)
        nums.clear() 
        
        # 3. Adiciona os elementos não-zero de volta (in-place)
        nums.extend(lista_sem_zeros)
        
        # 4. Adiciona os zeros de volta ao final (in-place)
        for i in range(zeros):
            nums.append(0)