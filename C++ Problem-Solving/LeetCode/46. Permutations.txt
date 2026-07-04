class Solution {
public
    vectorvectorint permute(vectorint& nums) {

     vectorvectorintans; 

     sort(nums.begin(),nums.end()); 

     do {

        ans.push_back(nums); 

     }while(next_permutation(nums.begin(),nums.end())); 


     return ans ; 

    }
};