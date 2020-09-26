class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {

        int damage;
        int size=timeSeries.size();
        
        if(size==0 || duration==0)
        {
            return 0;
        }
        
        for(int i=0; i<size-1; i++)
        {
            damage += std::min(duration, timeSeries[i+1]-timeSeries[i]);
        }
        
        return damage+duration;
    }
};
