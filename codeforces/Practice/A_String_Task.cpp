#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<char> result;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
        {
            continue;
        }
        else
        {
            result.push_back(s[i]);
        }
    }

    for(int i=0; i<result.size(); i++)
    {
        cout<<'.'<<result[i];
    }

    return 0;
}