class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int index=0;
        vector<int> result;
        while(index<nums1.size())
        {
            if(i<m && j<n)
            {
                if(nums1[i]<=nums2[j])
                {
                    result.push_back(nums1[i]);
                    i++;
                }
                if(nums1[i]>nums2[j])
                {
                    result.push_back(nums2[j]);
                    j++;
                }
            }
            else if(i<m)
            {
                result.push_back(nums1[i]);
                i++;
            }
            else if(j<n)
            {
                result.push_back(nums2[j]);
                j++;
            }
            index++;
        }
        nums1 = result;
        return;
    }
};
