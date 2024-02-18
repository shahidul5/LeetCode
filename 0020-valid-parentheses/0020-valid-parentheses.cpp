class Solution
{
    public:
        bool isValid(string s)
        {
            stack<char> myStack;
            
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                {
                    myStack.push(s[i]);
                }
                else
                {
                    if (myStack.empty()) {
                        return false;
                    }
                    if (s[i] == ')' && myStack.top() == '(')
                    {
                        myStack.pop();
                        continue;
                    }
                    else if (s[i] == '}' && myStack.top() == '{')
                    {
                        myStack.pop();
                    }
                    else if (s[i] == ']' && myStack.top() == '[')
                    {
                        myStack.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
            
            if(!myStack.empty()){
                return false;
            }

            return true;
        }
};