class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       long long int max = 0;
        long long int i=0,j=0;
        long long int sum = 0;
        sort(nums.begin(),nums.end());
        while(j<nums.size())
        {
            sum+=nums[j];
            if(nums[j]*(j-i+1)<=(sum+k))
            {
                if((j-i+1)>max)
                {
                    max = (j-i+1);
                }
                // if(j==nums.size()-1)
                // {
                //     i++;
                // }
            }
            else if(nums[j]*(j-i+1)>(sum+k))
            {
                while(nums[j]*(j-i+1)>(sum+k) && i+1<=j)
                {
                    sum-=nums[i];
                    i++;
                }
            }
            j++;
        }
        return max;
    }
};