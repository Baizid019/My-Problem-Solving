class Solution {
public:
    int countDigits(int num) {

        int cnt = 0; 
        int tmp = num ; 

        while(num>0)
        {
            int x = num%10; 

            if(tmp%x==0)
            {
                cnt++;
            }

            num = num / 10 ; 
        }

        return cnt ; 
        
    }
};