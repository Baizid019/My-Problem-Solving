class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
   
        int  n, m ; 
        n = matrix.size(); 
        m = matrix[0].size(); 

        vector<pair<int , int > >v;

        for(int i = 0 ; i < n ; i++ )
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(matrix[i][j]==0)
                {
                    v.push_back(make_pair(i,j));
                }
            }
        }

        for(auto it : v)
        {
            for(int j = 0 ; j < m ; j++ )
            {
                matrix[it.first][j] = 0 ; 
            }

            for(int i = 0 ; i < n ; i++ )
            {
                matrix[i][it.second] = 0 ; 
            }
        }

        for(int i = 0 ; i < n ; i++ )
        {
            for(int j = 0 ; j < m ; j++)
            {
                cout<<matrix[i][j]<<" " ;
            }
            cout<<endl; 
        }
        
    }
};