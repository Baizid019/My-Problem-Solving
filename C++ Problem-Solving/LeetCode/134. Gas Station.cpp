class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

      int s1 = 0, s2 = 0;

        for (auto it : gas)
            s1 += it;

        for (auto it : cost)
            s2 += it;

        if (s1 < s2)
            return -1;

        int x = 0;
        int ans = 0;

        for (int i = 0; i < gas.size(); i++) {
            x += gas[i] - cost[i];

            if (x < 0) {
                x = 0;
                ans = i + 1;
            }
        }

        return ans;
     }
     
     return ans ; 

    }
};