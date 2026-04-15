import heapq

class Solution:
    def lastStoneWeight(self, A: List[int]) -> int:
        # convert to max heap
        A.sort()
        while len(A) > 1:
            bisect.insort(A, A.pop() - A.pop())
        return A[0]
