class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        deque<int> a ; 

         for(auto it : nums)
        {
            a.push_back(it); 
        }

        while(k--)
        {
            int x = a.back();

            a.pop_back();

            a.push_front(x);
        }
        
        nums.assign(a.begin(), a.end());

        for(auto it : nums)
        {
            cout<<it<<" " ; 
        }
        cout<<endl; 
    }
};