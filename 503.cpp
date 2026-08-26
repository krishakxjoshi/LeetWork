class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;vector<int>ans(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            if(!st.empty() && nums[st.top()]<nums[i]){
                while(!st.empty() && nums[st.top()]<nums[i]){
                    ans[st.top()]=nums[i];
                    st.pop();
                }
                st.push(i);
            }
            else st.push(i);
        }
        for(int i=0;i<nums.size();i++){
            if(st.empty())break;
            else if(nums[st.top()]<nums[i]){
                while(!st.empty() && nums[st.top()]<nums[i]){
                    ans[st.top()]=nums[i];
                    st.pop();
                }
            }
            
        }
        
        return ans;
    }
};
