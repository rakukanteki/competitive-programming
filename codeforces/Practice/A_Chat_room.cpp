#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsinged long long
#define db double

void solve()
{
    string word, hello;
    cin>>word;
    int index=0;
    string s="hello";
    for(int i=0; i<word.size(); i++)
    {
        if(s[index] == word[i])
        {
            index++;
            if(index>=s.size())
            {
                cout<<"YES"<<endl;
                break;
            }
        }
    }

    if(index<s.size())
    {
        cout<<"NO"<<endl;
    }
    
}

int main()
{
    solve();
    return 0;
}
