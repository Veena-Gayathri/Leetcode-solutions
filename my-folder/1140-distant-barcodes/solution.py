
from collections import Counter
class Solution:
    def rearrangeBarcodes(self, barcodes: List[int]) -> List[int]:
        count = Counter(barcodes)
        sorted_items = sorted(count.items(), key=lambda x: -x[1])
        res = [0] * len(barcodes)
        i = 0
        for num, freq in sorted_items:
            for _ in range(freq):
                res[i] = num
                i += 2
                if i >= len(barcodes):
                    i = 1
        
        return res
        
        
        
        

