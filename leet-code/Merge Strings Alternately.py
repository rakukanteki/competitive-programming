class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        merged = []
        i, j = 0, 0
        while i < len(word1) and j < len(word2):
            merged.append(word1[i])
            merged.append(word2[j])
            i += 1
            j += 1
        # Append remaining characters from word1
        while i < len(word1):
            merged.append(word1[i])
            i += 1
        # Append remaining characters from word2
        while j < len(word2):
            merged.append(word2[j])
            j += 1
        
        return ''.join(merged)
