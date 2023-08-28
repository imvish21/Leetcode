class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=INT_MIN;
        unordered_map<char,int>mp;
        int size=s.length();
        int i=0,j=0;
        while(j<size)
        {
            mp[s[j]]++;
            if(mp.size()==j-i+1) 
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else if(mp.size()<j-i+1)
            {
                while(mp.size()<j-i+1)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                    {
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        if(s.length()>0) return ans;
        return 0;

    }
};