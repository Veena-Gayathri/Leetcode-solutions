class Solution:
    def maxScore(self, arr: List[int], k: int) -> int:
        window_sum = sum(arr[:k])
        maxi = window_sum
        start , end = 0, k-1
        while end!= -1:
            start -=1
            window_sum = window_sum - arr[end] + arr[start]
            end -=1
            maxi = max(maxi, window_sum)

        return maxi
