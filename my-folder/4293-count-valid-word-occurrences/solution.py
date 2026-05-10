class Solution:
    def countWordOccurrences(self, chunks: list[str], queries: list[str]) -> list[int]:
        s = "".join(chunks)

        # extract valid words
        words = re.findall(r'[a-z]+(?:-[a-z]+)*', s)

        freq = Counter(words)

        return [freq[q] for q in queries]
