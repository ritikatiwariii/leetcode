class Solution {
public:
    vector<int> nextSmaller(vector<int>& nums, int n) {
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevSmaller(vector<int>& nums, int n) {
        vector<int> ans(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> nextGreater(vector<int>& nums, int n) {
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevGreater(vector<int>& nums, int n) {
        vector<int> ans(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> prevMin = prevSmaller(nums, n);
        vector<int> nextMin = nextSmaller(nums, n);
        vector<int> prevMax = prevGreater(nums, n);
        vector<int> nextMax = nextGreater(nums, n);

        long long minSum = 0, maxSum = 0;

        for (int i = 0; i < n; i++) {
            long long leftMin = i - prevMin[i];
            long long rightMin = nextMin[i] - i;
            long long leftMax = i - prevMax[i];
            long long rightMax = nextMax[i] - i;

            minSum += leftMin * rightMin * 1LL * nums[i];
            maxSum += leftMax * rightMax * 1LL * nums[i];
        }

        return maxSum - minSum;
    }
};
