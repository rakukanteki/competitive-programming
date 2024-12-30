#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    vector<char> even_chars;
    for(int i=0; i<s.size(); i+=2)
    {
        even_chars.push_back(s[i]);
    }

    sort(even_chars.begin(), even_chars.end());
    int even_index = 0;
    for(int i=0; i<s.size(); i+=2)
    {
        s[i] = even_chars[even_index++];
    }

    cout<<s;

    return 0;
}