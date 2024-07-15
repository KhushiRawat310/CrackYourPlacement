class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,k;
        {
            while(i<n)
            {
                if(nums[i]==nums[j])
                {
                    i++;
                }
                else
                {
                    j++;
                    nums[j]=nums[i];
                }
               k=j+1;  
            }
        }
        return k;
    }
};
