class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
        unordered_map<char,int>mp;
	    int k = pat.length();
	    int size = txt.length();
	    for(int i = 0; i<pat.length(); i++)
	    {
	        mp[pat[i]]++;
	    }
	    int count = mp.size();
	    int i = 0;
	    int j = 0;
	    vector<int>ans;
	    while(j<size)
	    {
	        if(mp.find(txt[j])!=mp.end())
	        {
	            mp[txt[j]]--;
	            if(mp[txt[j]] == 0)
	            {
	                count--;
	            }
	        }
	        if(j-i+1<k)
	        {
	            j++;
	        }
	        else if(j-i+1 == k)
	        {
	            if(count == 0)
	            {
	                ans.push_back(i);
	            }
	            if(mp.find(txt[i])!=mp.end())
	            {
	                mp[txt[i]]++;
	                if(mp[txt[i]]==1)
	                {
	                    count++;
	                }
	            }
	            j++;
	            i++;
	        }
	    }
	    return ans;
    }
};