class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0;
        int j = 0;
        if(s.size() == 0)
            return true;
        for(int i = 0; i < t.size() && j < s.size(); i++){
            if(t[i] == s[j]){
                count++;
                j++;
                if(count == s.size())
                    return true;
            }
            else
                continue;
        }
        return false;
    }
};