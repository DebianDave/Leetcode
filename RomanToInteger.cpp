class Solution {
public:

    int romanToInt(string s) {
        int result= 0;
        if(s.length() == 0)
        {
            return result;
        }
        
        for(int i=s.length()-1; i>=0; i--)
        {
            switch(s[i])
            {
                    case('I') :
                        if(s[i+1] && s[i+1] == 'V')
                        {
                            result -= 1;
                        }
                        else if(s[i+1] && s[i+1] == 'X')
                        {
                            result -= 1;
                        }
                        else
                        {
                            result += 1;
                        }
                        break;
                    
                    case('V') :
                        result+=5;
                        break;
                    
                    case('X') :
                        if(s[i+1] && s[i+1] == 'L')
                        {
                            result -= 10;
                        }
                        else if(s[i+1] && s[i+1] == 'C')
                        {
                            result -= 10;
                        }
                        else
                        {
                            result += 10;
                        }
                        break;
                    
                    case('L') :
                        result += 50;
                        break;
                    
                    case('C') :
                        if(s[i+1] && s[i+1] == 'D')
                        {
                            result -= 100;
                        }
                        else if(s[i+1] && s[i+1] == 'M')
                        {
                            result -= 100;
                        }
                        else
                        {
                            result += 100;
                        }
                        break;
                    
                    case('D') :
                        result += 500;
                        break;
                    
                    case('M') :
                        result += 1000;
                        break;
            }
        }
        return result;
    }
};
