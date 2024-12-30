#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int gamesPlayed, A=0, B=0;
    string letters;
    cin>>gamesPlayed;

    for(int i=0; i<gamesPlayed; i++)
    {  
        char ch;
        cin>>ch;
        letters.push_back(ch);
    }

    for(int i=0; i<letters.size(); i++)
    {
        if(letters[i]=='A')
        {
            A++;
        }
        else
        {
            B++;
        }
    }
    
    if(A==B)
    {
        cout<<"Friendship";
    }
    else if(A>B)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Danik";
    }

    return 0;
}