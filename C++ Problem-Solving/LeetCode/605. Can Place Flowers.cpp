class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

    vector<int>v; 
    v = flowerbed; 

    int s1 = 0 , s2 = 0 ; 

    for(int i = 0 ; i < flowerbed.size();i++)
    {
        if(flowerbed[i] == 1 ) 
        {
            s1++; 
        }
    }

    
    if(v.size() >=2 && v[0]==0 && v[1] ==0)
    {
        v[0] = 1 ; 
    }

    if(v.size() >=2 && v[v.size() - 1 ]==0 && v[v.size() - 2 ] ==0)
    {
        v[v.size() - 1] = 1 ; 
    }

    
    for(int i = 1 ; i < v.size() - 1;i++)
    {
        if(v[i] == 0 && v[i+1] == 0 && v[i-1] == 0) 
        {
            v[i]  = 1 ; 
        }
    }

    
    for(int i = 0 ; i < v.size();i++)
    {
        if(v[i] == 1 ) 
        {
            s2++; 
        }
    }


    int s = s2 - s1 ; 


    bool f = false ; 

    if(s>=n)
    {
       f = true ; 
    }

    if(flowerbed.size()==1 && flowerbed[0] == 0)
    {
        f = true ; 
    }

    return f ; 
        
    }
};