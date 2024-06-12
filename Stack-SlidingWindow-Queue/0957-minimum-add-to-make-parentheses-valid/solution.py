class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        stack = []
        for n in s:
            if n == '(':
                stack.append(n)
            elif n == ')':
                if stack and stack[-1]== '(':
                    stack.pop()
                else:
                    stack.append(')')
        return len(stack)
