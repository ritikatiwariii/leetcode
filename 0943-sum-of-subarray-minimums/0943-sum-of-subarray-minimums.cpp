class Solution {
public:
    
        //find out the previous smallar element index
        vector<int>findPSEE(vector<int>arr){
            stack<int>st;
            vector<int>ans(arr.size());
            for(int i=0;i<arr.size();i++){
                while(!st.empty()&& arr[st.top()]>arr[i]){
                    st.pop();
                }
                ans[i]=(st.empty()? -1 :st.top());
                st.push(i);
            }
            return ans;
        }

        //nse
         vector<int>findNSE(vector<int>arr){
            stack<int>st;
            vector<int>ans(arr.size());
            for(int i=arr.size()-1;i>=0;i--){
                while(!st.empty()&& arr[st.top()]>=arr[i]){
                    st.pop();
                }
                ans[i]=(st.empty()? arr.size():st.top());
                st.push(i);
            }
            return ans;
        }
       int sumSubarrayMins(vector<int>& arr) {
        long long total=0;
        int MOD=(int)1e9+7;
        vector<int> pseeIndex=findPSEE(arr);
        vector<int> nseIndex=findNSE(arr);
        for(int i=0;i<arr.size();i++){
            long long left = i - pseeIndex[i];
            long long right = nseIndex[i] - i;
            long long value = arr[i];
            
            long long temp = (value % MOD * left % MOD) % MOD;
            temp = (temp * right % MOD) % MOD;
            
            total = (total + temp) % MOD;
        }
        return total;
    }
};