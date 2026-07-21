class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN)  return 0;
        long  rev=0;
        long  temp=x;
        if(x<0) temp=-x;
        while(temp>0){ 
            long  dig=temp%10;
            rev=rev*10+dig;
            temp/=10;
        }
        if (rev < INT_MIN || rev > INT_MAX) {
            return 0;
        }
        if(x<0) return -rev;
        else return rev;
        
    }
};