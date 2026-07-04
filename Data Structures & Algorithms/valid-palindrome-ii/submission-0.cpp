class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
         int l = 0;
         int r = n-1;
         while(l<r){
            if(s[l]!= s[r]){
                return ispalindrome(s.substr(0,l)+s.substr(l+1)) || ispalindrome(s.substr(0,r)+s.substr(r+1));
            }
            l++;
            r--;
         }
    return true;
    }
    bool ispalindrome(string s){
        int l = 0;
        int n = s.size();
        int r = n-1;
        while(l<r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};