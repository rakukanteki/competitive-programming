class Solution {
public:
    int compress(vector<char>& chars) {
        int k=0;
        int n=chars.size();

        for(int i=0; i<n;)
        {
            char letter = chars[i];
            int count = 0;
            while(i<n && letter==chars[i])
            {
                ++count;
                ++i;
            }
            chars[k++]=letter;
            if(count>1)
            {
                for(char ch:to_string(count))
                {
                    chars[k++] = ch;
                }
            }
        }
        return k;
    }
};
