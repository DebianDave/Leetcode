class Solution {
public:
    char findTheDifference(string s, string t) {
        int sNum =0;
        int tNum=0;
        
        for(int i=0; i<s.length(); i++)
        {
            sNum += (s[i] - 'a');
        }
        
        for(int i=0; i<t.length(); i++)
        {
            tNum += (t[i] - 'a');
        }
        
        return (char)((tNum - sNum) + 'a');
    }
};
