class Solution {
public:
    int firstUniqChar(string s) {

    map<char,int>mp; 
    
    for(int i = 0 ;  i < s.size() ; i++)
    {
       mp[s[i]]++; 
    }

    int p  = -1 ; 

    for(int i = 0 ;  i < s.size() ; i++)
    {
        if(mp[s[i]]==1)
        {
           p = i ; 
           break;
        }
    }

    return p; 
    
        
    }
};