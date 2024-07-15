class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0,nonzero=0;
        int n=nums.size();
        while(nonzero<n)
        {
            if(nums[nonzero]!=0)
            {
                swap(nums[nonzero],nums[zero]);
                nonzero++;
                zero++;
            }
            else
            {
                nonzero++;
            }
        }
    }
};
