class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int ,int>mp;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]=-1;
        }
        stack<int>st;
        for(int i=0;i<nums2.size();i++){
            if(st.empty())st.push(nums2[i]);
            else if(nums2[i]<st.top()){st.push(nums2[i]);}
            else{
                while(!st.empty() && nums2[i]>st.top()){
                    mp[st.top()]=nums2[i];
                    st.pop();
                }
                st.push(nums2[i]);
            }
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]=mp[nums1[i]];
        }
        return nums1;
    }
};
