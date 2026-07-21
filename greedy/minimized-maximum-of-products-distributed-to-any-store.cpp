class Solution {
public:
bool isValid(vector <int> &arr,int mid, int n){
    int sum=0;
    for(int x:arr){
        sum+= (x + mid - 1) / mid;;
    }
    return sum<=n;
}

    int minimizedMaximum(int n, vector<int>& quantities) {
          int st=1,end=*max_element(quantities.begin(),quantities.end()),ans=-1;
          
        while(st<=end){
        
            int mid=st+(end-st)/2;
            
            if(isValid(quantities,mid,n)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        
    }return ans;
  
    }
};