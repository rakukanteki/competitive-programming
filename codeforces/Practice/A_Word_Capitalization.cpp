#include<bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    char ch;
    cin>>word;

    if(word[0] >= 'a' && word[0] <= 'z')
    {   
        word[0] = word[0]-32;
    }
    for(int i=0; i<word.size(); i++)
    {
        cout<<word[i];
    }

    return 0;
}