#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    bool flag = false;
    int i, j;
    cin>>s1>>s2;
    int length1, length2;
    length1 = s1.size();
    length2 = s2.size();

    for(i=0, j=length2-1; i<length1, j>=0; i++, j--)
    {
        if(s1[i]==s2[j])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if((flag == true) && (length1==length2))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}