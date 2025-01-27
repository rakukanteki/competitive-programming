class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        reverse_words = words[::-1]

        return ' '.join(reverse_words)a
