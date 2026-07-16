class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {

        int mx = 0 , n=nums.size() ; 
        vector<int>p(n);
        
        p[n-1] = nums[n-1];

        for(int i=n-2;i>=0;i--)
        {
            p[i]=max(p[i+1],nums[i]);
        }

        for(int i=0;i<(n-k);i++)
        {
            mx=max(mx,(nums[i]+p[i+k]));
        }

        return mx;
    }
};