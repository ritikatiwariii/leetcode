class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     vector<int>ans(nums.size(),0);
     int positiveindex=0;
     int negativeindex=1;
     for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            //it means it is a -ve number
             ans[negativeindex]=nums[i];
             negativeindex=negativeindex+2;
        }
        else{
            ans[positiveindex]=nums[i];
            positiveindex=positiveindex+2;
        }
     }
     return ans;
    }
};