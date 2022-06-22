class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        
        smallestWord = min(strs,key=len)
        
        result = ""
        
        for i in range(len(smallestWord)):
            if strs[0][i] != strs[len(strs)-1][i]:
                break
            result += strs[0][i]
        
        return result
