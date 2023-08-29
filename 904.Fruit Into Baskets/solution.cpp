class Solution {
public:
    int totalFruit(vector<int>& a) {
        int ans=INT_MIN;
        int i=0,j=0;
        unordered_map<int,int>mp;
        int size=a.size();
        while(j<size)
        {
            mp[a[j]]++;
            if(mp.size()<=2)
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else if(mp.size()>2)
            {
                while(mp.size()>2)
                {
                    mp[a[i]]--;
                    if(mp[a[i]]==0)
                    {
                        mp.erase(a[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        if(size==1) return 1;
        else return ans;
    }
};