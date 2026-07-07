class Solution {
public:
    int xorOperation(int n, int start) {

    vector<int>v; 

    v.push_back(start);

    for(int i = 1 ; i < n ; i++)
    {
        int tmp = start + 2 * i ; 
        v.push_back(tmp); 
    }

    int ans = v[0]; 

    for(int i = 1 ; i < v.size() ; i++)
    {
        ans^=v[i];
    }

    return ans ; 


    }
};