class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        string ans = {}; 
        for(int i = 0 ; i < words.size();i++)
        {
            string s = words[i]; 
            string tmp = s; 
            reverse(tmp.begin(),tmp.end()); 

            if(tmp==s)
            {
                ans = s; 
                break; 
            }
        }

        return ans ; 

    }
};