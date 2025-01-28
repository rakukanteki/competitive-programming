class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0, j=0;

        while(i<s.size() && j<t.size())   
        {
            if(s[i]==t[j])
            {
                i++; // Move i forward if characters match
            }
            j++; // move j forward
        }

        // If i reaches the end of s, all characters were matched
        if(i == s.size()){return true;}
        else{return false;}
    }
};
