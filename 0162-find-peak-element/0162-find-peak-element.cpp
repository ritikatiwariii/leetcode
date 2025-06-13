int binarysearch(vector<int>& arr){
    int s=0;
    int n=arr.size();
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        return binarysearch(arr);
    }
};