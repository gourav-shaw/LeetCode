class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0,pt=0;
        for(int i=0;i<nums.size();i++){
            if(pt==0){
                ans=nums[i];
                pt=1;
            }
            else if(ans==nums[i]){
                pt++;
            }else{
                pt--;
            }
        }
        
        return ans;
    }
};