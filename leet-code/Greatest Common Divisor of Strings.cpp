class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str2.size() > str1.size())
        {
            return gcdOfStrings(str2, str1);
        }

        if(str2 == str1)
        {
            return str1;
        }

        if(str2.empty())
        {
            return str1;
        }

        if(str1.compare(0, str2.size(), str2) == 0)
        {
            return gcdOfStrings(str1.substr(str2.size()), str2);
        }

        return "";
    }
};
