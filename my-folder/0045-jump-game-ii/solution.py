class Solution:
    def jump(self, nums: List[int]) -> int:
        jumps = 0 
        max_jump = 0
        current_pos = 0
        for i in range(len(nums)-1):
            max_jump = max(max_jump, i + nums[i])

            if current_pos == i: 
                current_pos = max_jump
                jumps+=1
        
        return jumps





        # jumps = 0
        # curr_end = 0
        # farthest = 0
        
        # for i in range(len(nums) - 1):
        #     farthest = max(farthest, i + nums[i])
            
        #     if i == curr_end:
        #         jumps += 1
        #         curr_end = farthest
        
        # return jumps


