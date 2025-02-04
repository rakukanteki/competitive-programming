class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude=0, maxAltitude=INT_MIN, n=gain.size();
        for(int i=0; i<n; i++)
        {
            altitude += gain[i];
            maxAltitude = max(maxAltitude, altitude);
        }

        if(maxAltitude<0){return 0;}
        else{return maxAltitude;}
    }
};
