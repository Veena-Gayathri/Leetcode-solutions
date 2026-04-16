class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        last = {c: i for i, c in enumerate(s)}  # last occurrence

        stack = []
        in_stack = set()

        for i, c in enumerate(s):

            if c in in_stack:
                continue

            while stack and c < stack[-1] and last[stack[-1]] > i:
                removed = stack.pop()
                in_stack.remove(removed)

            stack.append(c)
            in_stack.add(c)

        return "".join(stack)
