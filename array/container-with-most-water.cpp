class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater =0;
        int lp=0,rp=height.size()-1;
        while(lp<rp){
            int ht=min(height[rp],height[lp]);
            int w=rp-lp;
            int area =ht*w;
            maxWater = max(maxWater,area);
            if(height[lp]<height[rp])
                lp++;
            else 
                rp--;
        }
        return maxWater;
    }
};