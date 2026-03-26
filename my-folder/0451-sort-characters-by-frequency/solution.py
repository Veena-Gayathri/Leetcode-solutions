from collections import Counter

class Solution:
    def frequencySort(self, s: str) -> str:

        # freq_dict = Counter(s)
        # sorted_chars = sorted(freq_dict.items(), key=lambda x: x[1], reverse=True)
        # return ''.join(char * count for char, count in sorted_chars)
        return ''.join(c * f for c, f in Counter(s).most_common())


