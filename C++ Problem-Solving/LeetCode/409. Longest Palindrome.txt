class Solution {
public:
    int longestPalindrome(string s) {
    
    map<char,int>mp; 

    for(int i = 0 ; i < s.size() ; i++)
    {
        mp[s[i]]++;
    }

    int ans = 0 ; 

    bool f = false ; 

    for(int i = 0 ; i < s.size() ; i++)
    {
        if(mp[s[i]]%2==1 && mp[s[i]]!=-1  )
        {
            ans+= ( mp[s[i]] - 1 ); 
            mp[s[i]] = -1 ; 

            f = true; 
        }
        
        if (mp[s[i]]%2==0 && mp[s[i]]!=-1 )
        {
            ans+=mp[s[i]]; 
            mp[s[i]] = -1 ; 
        }
    }

    if(f) { ans ++ ; }
    
    return ans ; 
        
    }
};