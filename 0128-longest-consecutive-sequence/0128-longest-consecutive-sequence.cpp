class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max = 1;
        int count = 1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == (nums[i-1] + 1)){
                count++;
                if(max < count) max = count;
            }else if(nums[i] == nums[i-1]){
                continue;
            }else {
                if(max < count) max = count;
                count = 1;
            }
        }
        if(!nums.size()) return 0;
        return max;
    }
};