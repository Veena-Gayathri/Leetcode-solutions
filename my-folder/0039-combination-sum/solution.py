class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
# #  this is my approach, not optimized but beats 85%
#         candidates.sort()
#         res = []
#         results = []
#         def helper(new_target:int, candidates_: List[int], results:List[int]):
#             if new_target == 0:
#                 res.append(results.copy())
#                 return
#             if new_target <0:
#                 return
#             candidates_ = [i for i in candidates_ if i <= new_target]
#             if not candidates_:
#                 return 
            
#             results.append(candidates_[-1])
#             new_target = new_target - candidates_[-1]

#             helper(new_target, candidates_, results)

#             results.pop()
#             new_target = new_target + candidates_[-1]

#             helper(new_target, candidates_[:-1], results)


#         helper(target, candidates, results)
#         return res


        res = []

        def backtrack(start, path, total):
            if total == target:
                res.append(path.copy())
                return
            if total > target:
                return

            for i in range(start, len(candidates)):
                backtrack(i, path + [candidates[i]], total + candidates[i])

        backtrack(0, [], 0)
        return res



