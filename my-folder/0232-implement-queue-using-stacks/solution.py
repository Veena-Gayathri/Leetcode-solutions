from collections import deque

class MyQueue:

    def __init__(self):
        self.a = deque()
        self.b = deque()

    def push(self, x: int) -> None:
        while self.a:
            self.b.append(self.a.pop())
        self.a.append(x)
        while self.b:
            self.a.append(self.b.pop())

    def pop(self) -> int:
        return self.a.pop()

    def peek(self) -> int:
        return self.a[-1]

    def empty(self) -> bool:
        if not self.a:
            return True
        return False



# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()
