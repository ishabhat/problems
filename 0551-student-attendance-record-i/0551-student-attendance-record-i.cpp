class Solution {
public:
    bool checkRecord(string s) {
        int a = 0, l = 0;
        for(auto it: s){
            if(it == 'A') 
                a++;
            (it == 'L')? l++ : l = 0; 
            if(a>1 or l>=3) 
                return false;
        }
        return true;
    }
};