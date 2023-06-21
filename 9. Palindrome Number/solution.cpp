class Solution {
public:
    bool isPalindrome(int x) {
      /* string s=to_string(x);
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }*/
    //without string
    if(x<0)
    {
        return false;
    }
    long long rev=0;
    long long temp=x;
    while(temp>0)
    {
        int rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    return (x==rev);
    }
};