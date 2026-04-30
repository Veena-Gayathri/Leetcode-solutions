from collections import Counter
class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:

        dic = {}
        for i in words:
            if i in dic:
                dic[i] +=1
            else:
                dic[i] = 1

        d = [(-value, key) for key,value in dic.items()]
        heapq.heapify(d)
        count = 0
        output = []
        while count < k:
            m = heapq.heappop(d)
            output.append(m[1])
            count+=1

        return output
        # freq = Counter(words)
        # max_heap = []
        # for key , value in freq.items():
        #     heapq.heappush(max_heap, [-value, key])
        # res = []
        # for i in range(k):
        #     max_val = heapq.heappop(max_heap)
        #     res.append(max_val[1])
        # return res

        # freq = Counter(words)
        
        # return heapq.nsmallest(
        #     k,
        #     freq.keys(),
        #     key=lambda x: (-freq[x], x)
        # )
