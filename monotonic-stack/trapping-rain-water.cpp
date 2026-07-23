class Solution {
public:
    int trap(vector<int>& h) {
        long maxWater=0;
        int l=0,r=h.size()-1,lmax=0,rmax=0;
        while(l<r){
            lmax=max(lmax,h[l]);
            rmax=max(rmax,h[r]);
            if(h[l]<h[r]){
                maxWater+=lmax-h[l];
                l++;
            }else{
                maxWater+=rmax-h[r];
                r--;
            }
        }
        return maxWater;
        
    }
};