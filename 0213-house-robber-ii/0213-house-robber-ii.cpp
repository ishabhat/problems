class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) 
            return nums[n-1];
        int next2 = 0;
        int next = nums[n-1];
        int curr;
        for(int i=n-2;i>=1;i--){
            int rob = nums[i] + next2;
            int notrob = next;
            curr = max(rob,notrob);
            next2 = next;
            next = curr;
        }
        int inc = next;
        next2=0,next=nums[n-2],curr=0;
        for(int i=n-3;i>=0;i--){
            int rob = nums[i] + next2;
            int notrob = next;
            curr = max(rob,notrob);
            next2 = next;
            next = curr;
        }
        int notinc = next;
        return max(inc,notinc);
    }
};