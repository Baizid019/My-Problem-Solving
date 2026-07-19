class Solution {
public:
    int arraySign(vector<int>& nums) {

       map<int,int>mp; 

       for(auto it : nums)
       {

        if(it<0)
        {
            mp[-1]++;
        }
        else if(it>0)
        {
            mp[1]++;
        }
        else 
        {
            mp[0]++;
        }

       }

       int ans ; 

       if(mp[0]>0)
       {
         ans = 0 ; 
       }
       else if(mp[-1]%2==0 or mp[-1]==0)
       {
         ans = 1 ; 
       }
       else 
       {
         ans = -1 ; 
       }



        return ans ;
        
    }
};