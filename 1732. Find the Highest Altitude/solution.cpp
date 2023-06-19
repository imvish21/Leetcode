// beats:100%
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>vec(n+1,-1);
        vec[0]=0;
        for(int i=1;i<=n;i++)
        {
            vec[i]=vec[i-1]+gain[i-1];
        }
        int maxi=vec[0];
        for(int i=1;i<vec.size();i++)
        {
            maxi=max(maxi,vec[i]);
        }
        return maxi;
    }
};