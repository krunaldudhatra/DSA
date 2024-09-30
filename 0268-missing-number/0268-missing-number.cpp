class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x1=-1,x2=-1;
        for(int i=0;i<=nums.size();i++)
        {
            x1=x1^(i);
        }
         for(int i=0;i<nums.size();i++)
        {
            x2=x2^nums[i];
        }
        return x1^x2;
    }
};