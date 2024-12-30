#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string a;
        vector<char> b;
        cin>>a;

        reverse(a.begin(), a.end());
        for(int i=0; i<a.size(); i++)
        {
            a[i] = tolower(a[i]);
            if(a[i]=='p')
            {
                b.push_back('q');
            }
            if(a[i]=='q')
            {
                b.push_back('p');
            }
            if(a[i]=='w')
            {
                b.push_back('w');
            }
        }
        
        for(auto &c: b)
        {
            cout<<c;
        }
        cout<<endl;
    }

    return 0;
}
