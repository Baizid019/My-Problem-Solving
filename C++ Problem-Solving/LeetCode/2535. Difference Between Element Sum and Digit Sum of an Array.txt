class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        long long int s1 = 0 , s2 = 0  , ans ; 

        for(auto it : nums)
        {
            s1+=it; 

            while(it>0)
            {
                s2+=(it%10); 
                it = it / 10 ; 
            }
        }

        ans = abs(s1 - s2); 

        return ans; 
    }
};