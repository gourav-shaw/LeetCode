class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int st=0,end=nums.size()-1;
        if(nums.size()==1)  return nums[nums.size()-1];
        while(st<=end){
            ans=nums[st]^nums[end];
            if(ans>0 && nums[st+1]^nums[end]!=ans){
                ans=nums[st];
                break;
            }
            else {
                ans=nums[end];
                break;
            }
            st++;
            end--;
        }
        return ans;
    }
};