import heapq

class Solution:
    def mincostToHireWorkers(self, quality, wage, k):
        workers = []
        
        for q, w in zip(quality, wage):
            workers.append((w / q, q))
        
        workers.sort()
        
        max_heap = []
        total_quality = 0
        result = float('inf')
        
        for ratio, q in workers:
            heapq.heappush(max_heap, -q)
            total_quality += q
            
            if len(max_heap) > k:
                total_quality += heapq.heappop(max_heap)
            
            if len(max_heap) == k:
                cost = total_quality * ratio
                result = min(result, cost)
        
        return result






# class Solution:
#     def mincostToHireWorkers(self, quality: List[int], wage: List[int], k: int) -> float:
        
#         workers = sorted([(w/q, q) for w, q in zip(wage, quality)])
        
#         heap = []
#         sum_q = 0
#         res = float('inf')
        
#         for ratio, q in workers:
#             heapq.heappush(heap, -q)   # max heap
#             sum_q += q
#             print(heap)
#             if len(heap) > k:
#                 sum_q += heapq.heappop(heap)  # remove largest q
            
#             if len(heap) == k:
#                 res = min(res, sum_q * ratio)
        
#         return res
        
        # proportion = [wage[i]/quality[i] for i in range(len(wage))]
        # # print(res)
        # min_wage = float('inf')
        # res = []
        # gen = {}
        # def generate_comb(k, start, gen, sum_t, max_k):
        #     if k == 0:
        #         res.append(sum_t * max_k)   # copy!
        #         return
        #     if start == len(quality):
        #         return
        #     # pruning (optional but efficient)
        #     if len(quality) - start < k:
        #         return
        #     prev_max = max_k
        #     prev_sum = sum_t
        #     sum_t += quality[start]
        #     max_k = max(max_k, proportion[start] )
        #     generate_comb(k - 1, start + 1, gen, sum_t, max_k)
        #     sum_t = prev_sum
        #     max_k = prev_max
        #     generate_comb(k, start + 1, gen, sum_t, max_k)
        #     # backtrack
            

        # generate_comb(k, 0, gen, 0, -float('inf') )
        
        # return min(res)
                


