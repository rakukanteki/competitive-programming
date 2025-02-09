class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for(int asteroid:asteroids)
        {
            bool destroyed=false;
            while(!stk.empty() and stk.top()>0 and asteroid<0)
            {
                if(stk.top()< abs(asteroid))
                {
                    stk.pop();
                    continue;
                }
                else if(stk.top() == abs(asteroid))
                {
                    stk.pop();
                }
                destroyed=true;
                break;
            }
            if(destroyed==false)
            {
                stk.push(asteroid);
            }
        }

        vector<int> ans(stk.size());
        for(int i=stk.size()-1; i>=0; i--)
        {
            ans[i] = stk.top();
            stk.pop();
        }

        return ans;
    }
};
