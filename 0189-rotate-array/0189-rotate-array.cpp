class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==0)
        {
            return;
        }
        if(k>n)
        {
            k=k%n;
            
        }
       vector<int> temp;
        for(int i=0;i<k;i++)
        {
            temp.push_back(nums[n-k+i]);
        }
        for(int i=n-k;i>0;i--)
        {
            nums[i-1+k]=nums[i-1];
        }
        for(int i=0;i<k;i++)
        {
            nums[i]=temp[i];
        }

    }
};