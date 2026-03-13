class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        numsMerge = []
        numsMerge = nums1 + nums2
        numsMerge.sort()

        if len(numsMerge) % 2 == 0:
            valor1 = len(numsMerge) // 2
            valor2 = valor1 - 1
            total = (numsMerge[valor1] + numsMerge[valor2]) / 2
            return total
        else:
            valor = len(numsMerge) // 2
            return numsMerge[valor]