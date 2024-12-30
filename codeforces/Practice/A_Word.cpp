#include<bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    int uppercase=0, lowercase=0;
    vector<char> lowerCaseWord, UpperCaseWord;
    cin>>word;

    for(int i=0; i<word.size(); i++)
    {
        if(word[i]>='a' && word[i]<='z')
        {
            lowercase++;
        }
        else
        {
            uppercase++;
        }
    }

    if(lowercase>=uppercase)
    {
        for(int i=0; i<word.size(); i++)
        {
            lowerCaseWord.push_back(tolower(word[i]));
        }
        for(auto &c: lowerCaseWord)
        {
            cout<<c;
        }
    }
    else
    {
        for(int i=0; i<word.size(); i++)
        {
            UpperCaseWord.push_back(toupper(word[i]));
        }
        for(auto &c: UpperCaseWord)
        {
            cout<<c;
        }
    }

    return 0;
}