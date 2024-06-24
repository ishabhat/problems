class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int longest = 0;
        int zeros = 0;
        int i = 0; 

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == 0) 
                zeros++;
            while (zeros > 1) {
                if (nums[i] == 0) {
                    zeros--;
                }
                i++;
            }
            if (zeros == 1 || zeros == 0) {
                longest = max(longest, j - i);
            }
        }
        return longest;
    }
};
