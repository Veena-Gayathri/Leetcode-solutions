class Solution:
    def search(self, arr: List[int], target: int) -> bool:
        
        left , right = 0, len(arr) - 1

        while left<=right:

            mid = (left + right)//2
            if arr[mid] == target:
                return True
            if arr[left] == arr[mid] == arr[right]:
                left += 1
                right -= 1
                continue
            if arr[left] <= arr[mid]:
                if arr[left] <= target < arr[mid]:
                    right = mid - 1
                else:
                    left = mid + 1
            # right half is sorted
            else:
                if arr[mid] < target <= arr[right]:
                    left = mid + 1
                else:
                    right = mid - 1
            
        return False


