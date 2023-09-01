class Solution {
public:
    string minWindow(string s, string t) {
        int size=s.size();
        int start=0;
        unordered_map<char,int>mp;
        for(int i=0;i<t.size();i++)
        {
            mp[t[i]]++;
        }
        int count=mp.size();
        int i=0,j=0;
        int minlen=INT_MAX;
        while(j<size)
        {
            if(mp.find(s[j])!=mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]]==0)
                {
                    count--;
                }
            }
            if(count==0)
            {
                while(count==0)
                {
                    if(mp.find(s[i])!=mp.end())
                    {
                        mp[s[i]]++;
                        if(mp[s[i]]==1)
                        {
                            count++;
                            if(j-i+1<minlen)
                            {
                                minlen=j-i+1;
                                start=i;
                            }
                        }
                    }
                    i++;
                }

            }
            j++;
        }
        if(minlen==INT_MAX) return "";
        return s.substr(start,minlen);
    }
};