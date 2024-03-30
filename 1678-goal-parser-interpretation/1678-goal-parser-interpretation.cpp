class Solution {
public:
    string interpret(string command) {
        string result;
        for(int i = 0; i < command.size(); i++){
            if(command[i] == '(' && command[i+1] == ')'){
                result += 'o';
                continue;
            }
            if(command[i] == '(' || command[i] == ')') continue;
            result += command[i];
        }
        return result;
    }
};