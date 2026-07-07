class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=0;
        int maxal=0;
        for(int i=0;i<gain.size();i++){
            n+=gain[i];
            maxal=max(maxal,n);
        };
        return maxal;
    };
};