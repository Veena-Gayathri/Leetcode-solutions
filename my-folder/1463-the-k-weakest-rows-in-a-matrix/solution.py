import heapq
class Solution:
    def count_ones(self, row):
        l, r = 0, len(row)
        while l < r:
            mid = (l + r) // 2
            if row[mid] == 1:
                l = mid + 1
            else:
                r = mid
        return l
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        arr = []
        
        for i, row in enumerate(mat):
            count = self.count_ones(row)
            arr.append((count, i))
        
        arr.sort()
        return [i for _, i in arr[:k]]

