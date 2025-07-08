class Solution {
public:
    int trap(vector<int>& height) {
        int leftMax=0;
        int rightMax=0;
        int l=0;
        int total=0;
        int r=height.size()-1;
        while(l<r){
            if(height[l]<height[r]){
                //someone have greater hight present in right
                 if(leftMax >height[l]){
                    //support from left also
                      total=total+ (leftMax-height[l]);
                 }
                 else{
                    //no support from left
                    leftMax=height[l];
                 }
                    l=l+1;
                 
            }
            else{
                if(rightMax>height[r]){
                    //someone present on right 
                    total=total+ (rightMax-height[r]);
                }
                else{
                    rightMax=height[r];
                }
                    r=r-1;
                
            }
        }
        return total;
    }
};