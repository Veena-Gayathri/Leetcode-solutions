from math import gcd

def lcm(x, y):
    return x * y // gcd(x, y)

def count_ugly(x, a, b, c):
    ab = lcm(a, b)
    bc = lcm(b, c)
    ac = lcm(a, c)
    abc = lcm(a, bc)
    return x//a + x//b + x//c - x//ab - x//bc - x//ac + x//abc

class Solution:
    def nthUglyNumber(self, n: int, a: int, b: int, c: int) -> int:
        left, right = 1, 2 * 10**9
        while left < right:
            mid = (left + right) // 2
            if count_ugly(mid, a, b, c) < n:
                left = mid + 1
            else:
                right = mid
        return left
