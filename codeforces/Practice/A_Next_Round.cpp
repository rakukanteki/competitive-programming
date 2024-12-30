#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, k, value, i, count=0, score;
    cin>>n>>k;
    vector<int> vec(n);

    for(i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    // sort(vec.begin(), vec.end(), greater<int>());

    score = vec[k-1];

    if(score == 0)
    { 
        for(i=0; i<k-1; i++)  
        {
            if(vec[i]>0)
            {
                count++;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        for(i=0; i<vec.size(); i++)
        {
            if((vec[i]>=score) && score>0)
            {
                count++;
            }
        }
    }
    
    cout<<count;

    return 0;
}