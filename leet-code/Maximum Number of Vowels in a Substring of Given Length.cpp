class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();

        int count=0, maxCount=0;
        for(int i=0; i<k; i++)
        {
            if(isVowel(s[i])){count++;}
        }

        maxCount=count;

        for(int i=k; i<n; i++)
        {
            if(isVowel(s[i])){count++;}
            if(isVowel(s[i-k])){count--;}
            maxCount=max(count, maxCount);
        }
        return maxCount;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
