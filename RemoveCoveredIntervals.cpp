class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        vector<bool> isCovered;
        for(int i=0; i<intervals.size(); i++)
        {
            isCovered.push_back(false);
        }
        
        int result = intervals.size();
        
        for(int i=0; i<intervals.size(); i++)
        {
            if(!isCovered[i])
            {
                for(int j=0; j<intervals.size(); j++)
                {
                    if(i==j)
                    {
                        continue;
                    }
                    
                    if(intervals[i][0] >= intervals[j][0] 
                        && intervals[i][1] <= intervals[j][1])
                    {
                        isCovered[i] = true;
                        result--;
                        break;
                    }
                }
            }
        }
        
        return result;
    }
};
