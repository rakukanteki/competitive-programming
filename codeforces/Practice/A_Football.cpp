#include <bits/stdc++.h>
using namespace std;

int main()
{
    string players;
    int count = 1;
    cin >> players;

    for(int i=0; i<players.size(); i++)
    {
        if(players[i] == players[i+1])
        {
            count++;
            if(count==7)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        else
        {
            count = 1;
        }
    }
    // cout<<count;
    if(count>=7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}
