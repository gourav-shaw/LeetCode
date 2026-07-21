class Solution {
public:
    int trap(vector<int>& height) {
        long maxWater=0;
        int l=0,r=height.size()-1,lm=0,rm=0;

        while(l<r){
            if(height[l]<=height[r]){
                lm=max(lm,height[l]);
                maxWater+=lm-height[l];
                l++;
            }else{
                rm=max(rm,height[r]);
                maxWater+=rm-height[r];
                r--;
            }
        }
        return maxWater;
        
    }
};