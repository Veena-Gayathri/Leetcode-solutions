class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        stack = []
        for a in asteroids:
            while(stack and stack[-1]>0 and a<0):
                sum = a+stack[-1]
                if sum<0:
                    stack.pop()
                elif sum>0:
                    a=0
                else:
                    stack.pop()
                    a=0
            if a!=0:
                stack.append(a)
        return stack
                   
