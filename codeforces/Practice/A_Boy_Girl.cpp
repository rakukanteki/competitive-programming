#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, temp;
    cin>>s;
    int length = 0;

    sort(s.begin(), s.end());

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != s[i+1])
        {
            temp.push_back(s[i]);
        }
    }
    
    if(temp.size()%2 == 0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }

    return 0;
}