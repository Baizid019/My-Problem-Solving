class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
    
    int x = ( nums.size() / 2 ) ; 

    int cnt = 0 ; 

    bool f = true; 

    for(int i = 0 ; i < nums.size();i++)
    {
        if(nums[i]==nums[x])
        {
            cnt++;
        }
    }

    if(cnt>1)
    {
        f = false ;
    }

    return f;
        
    }
};