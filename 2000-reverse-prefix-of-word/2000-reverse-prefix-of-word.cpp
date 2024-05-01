class Solution {
public:
    string reversePrefix(string word, char ch) {
        string result = "";
        int check = 0;
        for(int i = 0; i < word.length(); i++){
            if(word[i] != ch && !check){
                result += word[i];
            }else if(word[i] == ch && !check){
                check++;
                result += word[i];
                reverse(result.begin(), result.end());
            }else{
                result += word[i];
            }
        }
        
        // if(!check) reverse(result.begin(), result.end());
        
        return result; 
    }
};