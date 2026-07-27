class Solution {
public:
    string reverseOnlyLetters(string s) {
        int st=0,end=s.size()-1;
        while(st<=end){
            if(!(s[st]>=65 && s[st]<=122)){
                st++;
            }
            else if(!(s[end]>=65 && s[end]<=122)){
                end--;
            }
            else{
                swap(s[st],s[end]);
                st++;
                end--;
            }
        }
        return s;
    }
};