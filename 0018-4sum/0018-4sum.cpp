class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>s;
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int k=j+1;
                int l=nums.size()-1;
                while(k<l){
                   long long int sum=nums[i];
                   sum=sum+nums[j];
                   sum=sum+nums[k];
                   sum=sum+nums[l];
                    if(sum==target){
                        s.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if(sum>target){
                        l--;
                    }
                    else{
                        k++;
                    }
                }
            }
        }
        for(auto it:s)
        v.push_back(it);
        return v;
        
    }
};

