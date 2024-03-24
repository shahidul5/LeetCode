class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int repeated = 0;
        sort(nums.begin(), nums.end());
        for(auto i: nums){
            if(i == repeated) return repeated;
            else repeated = i;
        }
        
        return repeated;
    }
};