class Solution:
    def combinationSum3(self, k: int, n: int):
        end = min(n, 9)
        res = []

        def solve(n, k, end, sol):
            # ✅ valid combination
            if n == 0 and k == 0:
                res.append(sol.copy())
                return

            # ❌ invalid cases
            if n < 0 or k < 0 or end == 0:
                return

            # ✅ choose 'end'
            sol.append(end)
            solve(n - end, k - 1, end - 1, sol)

            # backtrack
            sol.pop()

            # ❌ skip 'end'
            solve(n, k, end - 1, sol)

        solve(n, k, end, [])
        return res
            


        
