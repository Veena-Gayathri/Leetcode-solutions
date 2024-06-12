# solution no 2 using stack

class Solution:
    def longestWPI(self, hours: List[int]) -> int:
        n = len(hours)
        prefixSum = [0] * (n + 1)
        
        for i in range(1, n + 1):
            prefixSum[i] = prefixSum[i - 1] + (1 if hours[i - 1] > 8 else -1)

        stack = []
        for i in range(n + 1):
            if not stack or prefixSum[i] < prefixSum[stack[-1]]:
                stack.append(i)
        
        max_len = 0
        for i in range(n, -1, -1):
            while stack and prefixSum[i] > prefixSum[stack[-1]]:
                max_len = max(max_len, i - stack.pop())
        
        return max_len
