class Solution:
    def maxArea(self, height: List[int]) -> int:
        max_area = 0
        left = 0
        right = len(height) - 1

        while left < right:
            max_area = max(max_area, (right - left) * min(height[left], height[right]))

            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        
        return max_area



"""
 0 1 2 3 4 5 6 7 8
[1,8,6,2,5,4,8,3,7]

1: start= 0 end = 8
    water = end - start * min(height) = 8
    max_water = 8
    which is min, start +=1
2: start = 1, end = 8
    water = 7* 7 = 49
    max_water = 49
    end -= 1
3: 4: start = 1, end = 6
    water = 5* 8 = 40
    max_water = 49
    start +=1 and end-=1
left< right: condition breaks, max_water = 49
"""
    
























