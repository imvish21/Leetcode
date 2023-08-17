class Solution {
public:
    int strStr(string a, string b) {
        int n1 = a.length();
        int n2 = b.length();
        int i = 0;
        int j = 0;
        int k = 0;
        bool pre = false;
        // if(a==b)
        // {
        //    pre = true;
        // }
        while(i<=n1-n2)
        {
            if(a[i]==b[j])
            {
                k = i;
                while(j<n2)
                {
                    if(a[k]!=b[j]){
                        j=0;
                        break;
                    }  

                    j++;
                    if(j==n2)
                    {
                       pre=true;
                    }
                    k++;
                }
           
            }
            if(pre)  break;
            i++;
        }
        if(pre) return i;
        else    return -1;
        // bool pre = false;
        // int start;
        // while(i<n1)
        // {
        //     if(haystack[i]==needle[j])
        //     {
        //             i++;
        //             j++;
        //         if(j==n2)
        //         {
        //             pre = true;
        //             start = i-n2; 
        //             break;
        //         }
        //     }
        //     else{
        //         j = 0;
        //         i++;
        //     }
            
        // }
        // if(pre == true)
        // {
        //     return start;
        // }
        // else
        // {
        //     return -1;
        // }


    }
};