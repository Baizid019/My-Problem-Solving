class Solution {
public:
    string triangleType(vector<int>& nums) {

        set<int>ss; 

        string s ;

        sort(nums.begin(),nums.end()); 

        bool f = true; 

        if(nums[0]+nums[1]<=nums[2])
        {
            f = false ; 
        }

        ss.insert(nums[0]);
        ss.insert(nums[1]);
        ss.insert(nums[2]);

        if(ss.size()==1)
        {
           s = "equilateral";
        }
        else if(ss.size()==2)
        {
           s = "isosceles";
        }
        else if(ss.size()==3) 
        {
           s = "scalene";
        }

        if(f==false)
        {
            s = "none";
        }
        
        return s ; 
    }
};