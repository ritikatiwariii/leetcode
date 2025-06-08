class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        int n=nums.size();
         if(nums[0]!=0){
                return 0;
            }
           if(nums[n-1]!=n){
            return n;
           }
        for(int i=0;i<nums.size();i++){
           
           
             if(nums[i]!=i ){
              return i;
            }
           
        
        }
        return 0;
    }
};