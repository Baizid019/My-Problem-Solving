class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

    deque<int>v; 

    for(auto it : nums)
    {
        v.push_back(it) ; 
    }

    sort(v.begin() , v.end()); 

    vector<int>ans; 

    while(1)
    {
       if(v.size()<1)
       {
        break; 
       }

       int x = v.front(); 

       v.pop_front(); 

       int y = v.front(); 

       v.pop_front(); 

       ans.push_back(y); 
       ans.push_back(x); 
    }

    return ans ; 
        
    }
};