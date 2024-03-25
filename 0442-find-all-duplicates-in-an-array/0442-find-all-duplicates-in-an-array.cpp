class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> hashSet;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            if(hashSet.find(nums[i]) != hashSet.end()) result.push_back(nums[i]);
            else hashSet.insert(nums[i]);
        }
        return result;
    }
};