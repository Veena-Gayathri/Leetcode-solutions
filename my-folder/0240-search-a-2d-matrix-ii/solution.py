class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m,n = len(matrix),len(matrix[0])
        l,r = 0,m
        def search(arr):
            l,r = 0,n
            while l < r:
                mid = (l + r) // 2
                if arr[mid] == target:
                    return True
                elif arr[mid] < target:
                    l = mid + 1
                else:
                    r = mid
            return False
        while l < r:
            mid = (l + r) // 2
            if matrix[mid][0] <= target and matrix[mid][-1] >= target:
                if search(matrix[mid]):
                    return True
                else:
                    del matrix[mid]
                    r -= 1
            elif matrix[mid][0] > target:
                r = mid
            else:
                l = mid + 1
        return False 




    # def searchMatrix(self, mat: List[List[int]], target: int) -> bool:
        
    #     m=len(mat)
    #     n=len(mat[0])
        
    #     for i in range(m):
    #         if mat[i][0]<=target and mat[i][-1]>=target:
    #             lo=0
    #             hi=n
    #             while (lo<hi):
    #                 mid=(lo+hi)//2
                    
    #                 if mat[i][mid]==target:
    #                     return True
    #                 elif mat[i][mid]<target:
    #                     lo = mid + 1
    #                 else:
    #                     hi = mid
                        
    #     return False

#     def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
#         m, n = len(matrix[0])-1, len(matrix)-1
#         start, stop = m,0
#         while start>= 0 and stop<=n:
#             if matrix[stop][start]== target:
#                 return True
#             elif matrix[stop][start]> target:
#                 start -= 1
#             else:
#                 stop +=1
#         return False
