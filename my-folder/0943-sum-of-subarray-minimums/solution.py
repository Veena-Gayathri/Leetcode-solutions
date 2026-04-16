class Solution:
    
    def sumSubarrayMins(self, arr: List[int]) -> int:
        MOD = 10**9 + 7
        stack = []  # (value, count)
        result = 0
        cur_sum = 0

        for x in arr:
            count = 1

            while stack and stack[-1][0] > x:
                val, cnt = stack.pop()
                count += cnt
                cur_sum -= val * cnt

            stack.append((x, count))
            cur_sum += x * count

            result += cur_sum

        return result % MOD

