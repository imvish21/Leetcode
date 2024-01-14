class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0, xor2=0;
        int n = nums.size()+1;
        for(int i = 1 ; i<n ; i++){
            xor1 = xor1 ^ i;
        }
        // sort(nums.begin(),nums.end());
        for(int i = 0; i<n-1; i++){
            xor2 = xor2 ^ nums[i];
        }
        return xor1^xor2;
    }
};