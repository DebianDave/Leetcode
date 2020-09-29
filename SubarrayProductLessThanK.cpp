class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0)
        {
            return 0;
        }
        int count = 0;
        int prod=1;
        int left = 0;
        int right = 0;
        int size = nums.size();
        while(right < size)
        {
            prod *= nums[right];
            while(left<size && prod>=k)
            {
                prod /= nums[left];
                left++;
            }
            if(prod < k)
            {
                count += (right - left) + 1;
            }
            right++;
        }
        return count;
    }
};
