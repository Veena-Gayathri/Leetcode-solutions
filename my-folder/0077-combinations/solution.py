from itertools import combinations

class Solution:
    # def combine(self, n, k):
    #     return list(combinations(range(1, n+1), k))

  def combine(self, n, k):
    return reduce(lambda C, _: [[i]+c for c in C for i in range(1, c[0] if c else n+1)],
                  range(k), [[]])


    # def combine(self, n: int, k: int) -> List[List[int]]:
    #     res = []

    #     def dfs(i, path):
    #         if len(path) == k:
    #             res.append(path[:])
    #             return
    #         if i > n:
    #             return
            
    #         # pick
    #         path.append(i)
    #         dfs(i + 1, path)
    #         path.pop()
            
    #         # skip
    #         dfs(i + 1, path)

    #     dfs(1, [])
    #     return res
            
