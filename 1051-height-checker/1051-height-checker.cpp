class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> newHeight = heights;
        sort(newHeight.begin(), newHeight.end());
        
        auto count = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != newHeight[i]) count++;
        }
        
        return count;
    }
};