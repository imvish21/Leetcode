class Solution {
public:
    int reverse(int x) {
        int digit = x;
        long rev = 0;
        while(digit!=0)
        {
            int last = digit%10;
            rev = (rev*10)+last;
            digit/=10;
        }
        if(rev>INT_MAX || rev< INT_MIN)
        {
            return 0;
        }
        else return int(rev);
    }
};