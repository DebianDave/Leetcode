class Solution:
    def romanToInt(self, s: str) -> int:
        counter = 0
        overflow = False
        for count, value in enumerate(s):
            
            if count+1 >= len(s):
                overflow = True
                
            if value is 'M':
                counter = counter + 1000
        
            if value is 'D':
                counter = counter + 500
            
            if value is 'C':
                if overflow is False and (s[count+1] is 'D' or s[count+1] is 'M'):
                    counter = counter - 100
                else:
                    counter = counter + 100
            
            if value is 'L':
                counter = counter + 50
            
            if value is 'X':
                if overflow is False and (s[count+1] is 'L' or s[count+1] is 'C'):
                    counter = counter - 10
                else:
                    counter = counter + 10
            
            if value is 'V':
                counter = counter + 5
            
            if value is 'I':
                if overflow is False and (s[count+1] is 'X' or s[count+1] is 'V'):
                    counter = counter -1
                else:
                    counter = counter + 1
                
        return counter
