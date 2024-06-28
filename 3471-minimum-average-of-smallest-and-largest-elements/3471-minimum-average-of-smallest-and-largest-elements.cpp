class Solution {
public:
    double minimumAverage(vector<int>& nums) 
    {
        int n=nums.size();
        double res=INT_MAX;
        sort(begin(nums),end(nums));
        for(int i=0;i<n/2;i++)
        {
            int mini=nums[i];
            int maxi=nums[n-i-1];
            res=min(double(res),double(maxi+mini)/2);
        }    
        return res;
    }
};