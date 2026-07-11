class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        map<char,int>mp ; 

        for(int i = 0 ; i < sentence.size() ; i++)
        {
            mp[sentence[i]]++; 
        }

        bool f = true ; 

        for(int i = 'a' ; i <='z' ; i++)
        {
            if(mp[i]==0)
            {
                f = false ; 
                break; 
            }
        }

        return f ; 

    }
};