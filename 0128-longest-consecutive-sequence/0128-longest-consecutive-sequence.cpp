class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //sort the arrayy
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        //after that just assign the global variables as
        int largest=1;
        int cnt=0;
        int presmaller=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 ==presmaller){
                //it means it is a part of the sequence so let,s increase the counter and update the presmaller 
                cnt=cnt+1;
                presmaller=nums[i];
            }
            else if(
                //it is not the part of sequence so made a new sequence 
            
                    nums[i]!=presmaller){
                
                    //creta a new sequence
                    presmaller=nums[i ];
                    cnt=1;
                
        }
            //update the largest  
            largest=max(largest,cnt);

        }
        return largest;
    }
};