class MinStack:

    def __init__(self):
        self.vals = []
        self.min_vals = []

    def push(self, val: int) -> None:
        self.vals.append(val)
        
        # push to min stack if it's smaller or equal
        if not self.min_vals or val <= self.min_vals[-1]:
            self.min_vals.append(val)

    def pop(self) -> None:
        val = self.vals.pop()
        
        if val == self.min_vals[-1]:
            self.min_vals.pop()

    def top(self) -> int:
        return self.vals[-1]

    def getMin(self) -> int:
        return self.min_vals[-1]

# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
