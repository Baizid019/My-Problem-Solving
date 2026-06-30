class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      
    int mx = 0; 

    for(auto it : sentences)
    {
        int word = 1 ; 

        for(auto itt : it)
        {
            if(itt==' ')
            {
                word++; 
            }
        }
        
        mx = max(mx , word); 
    }
       return mx ; 
    }
};