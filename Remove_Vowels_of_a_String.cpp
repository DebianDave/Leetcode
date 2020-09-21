class Solution {
public:
    string removeVowels(string S) {
        string vowels = "aeiou";
        string result = "";
        for(int i=0; i<S.length(); i++)
        {
            if(vowels.find(S[i])==std::string::npos)
            {
                result+=S[i];
            }
        }
        return result;
    }
};
