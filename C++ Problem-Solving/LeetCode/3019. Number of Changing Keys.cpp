class Solution {
public:
    int countKeyChanges(string s) {
    
    string tmp = {}; 

    for(int i = 0 ; i < s.size() ; i++)
    {
        char c = tolower(s[i]); 
        tmp+=c;
    }

    int ans = 0 ; 
    
    for(int i = 1 ; i < tmp.size() ; i++)
    {
       if(tmp[i]!=tmp[i-1])
       {
         ans ++ ;
       }
    }

    return ans ; 


        
    }
};