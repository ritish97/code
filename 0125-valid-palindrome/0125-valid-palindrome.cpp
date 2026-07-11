class Solution {
public:
    bool check (int i , string &s){
        if (i > s.size()/2) return true;
        if (s[i]!=s[s.size()-i-1]) return false;
        return check(i+1, s);
    }
    bool isPalindrome(string s) {
        string cleaned = "";
        for (char c : s){
            if (isalnum(c)) cleaned += tolower(c);
        }
        if (cleaned.size()<=1) return true;
        return check(0,cleaned);
        
    }
};