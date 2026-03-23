from typing import List

class Solution:
    def countSmaller(self, nums: List[int]) -> List[int]:
        n = len(nums)
        res = [0] * n
        indexes = list(range(n))  # keep track of original positions

        def mergeSort(l, r):
            if l >= r:
                return
            mid = (l + r) // 2
            mergeSort(l, mid)
            mergeSort(mid + 1, r)
            merge(l, mid, r)

        def merge(l, mid, r):
            temp = []
            i, j = l, mid + 1
            right_count = 0  # count of elements from right array smaller than current left element

            while i <= mid and j <= r:
                if nums[indexes[j]] < nums[indexes[i]]:
                    temp.append(indexes[j])
                    right_count += 1
                    j += 1
                else:
                    temp.append(indexes[i])
                    res[indexes[i]] += right_count
                    i += 1

            while i <= mid:
                temp.append(indexes[i])
                res[indexes[i]] += right_count
                i += 1

            while j <= r:
                temp.append(indexes[j])
                j += 1

            # Copy back to indexes
            for k in range(len(temp)):
                indexes[l + k] = temp[k]

        mergeSort(0, n - 1)
        return res
