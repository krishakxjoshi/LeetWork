class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {

        stack<int> st;
        vector<int> res(nums.size(), 0);

        for(int i = 0; i < nums.size(); i++) {

            while(!st.empty() && nums[i] > nums[st.top()]) {
                res[st.top()] = i - st.top();
                st.pop();
            }

            st.push(i);
        }

        return res;
    }
};
