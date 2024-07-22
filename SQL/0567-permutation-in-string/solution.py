class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        ls1 = len(s1)
        s1l = {}
        s2l = {}
        pointer = 0
		# insert all characters in a dict for s1 {'char'->str: count->int}
        for char in s1:
            s1l[char] = 1 + s1l.get(char, 0)
        for i in range(len(s2)):
            s2l[s2[i]] = 1 + s2l.get(s2[i], 0)
            if i - pointer + 1 == ls1:
                if s1l == s2l:
                    return True
                else:
                    if s2l[s2[pointer]] == 1:
                        s2l.pop(s2[pointer], None)
                    else:
                        s2l[s2[pointer]] -= 1
                    pointer += 1
        return False
