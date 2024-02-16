class Solution
{
    int charToInt(char c)
    {
        switch (c)
        {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
    public:
        int romanToInt(string s)
        {

            int sum = 0;
            int minus = 0;
            for (int i = s.length(); i >= 0; i--)
            {
                int temp = charToInt(s[i]);
                if(temp >= minus) sum += temp;
                else sum -= temp;
                minus = temp;
            }
            
            return sum;
        }
};