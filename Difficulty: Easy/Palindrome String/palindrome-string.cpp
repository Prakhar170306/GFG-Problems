class Solution {
  public:
    bool isPalindrome(string& s) {
       int st=0;
       int end=s.length()-1;
       while(st<end){
           if(s[st++]!=s[end--]){
               return false;
           }
       }
       return true;
    }
};