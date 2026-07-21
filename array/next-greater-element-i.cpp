class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> s;
        unordered_map<int,int> m;
        for(int i=nums2.size()-1;i>=0;i--){
            int num=nums2[i];
            while(s.size()>0 && s.top()<=num){
                s.pop();
            }
            if(s.empty())   m[num]=-1;
            else    m[num]=s.top();

            s.push(num);
        }
        vector<int> ans(nums1.size());
        for(int i=0;i<ans.size();i++){
            ans[i]=m[nums1[i]];
        }
        return ans;
    }
};