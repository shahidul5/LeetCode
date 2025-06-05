class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int highestValue = 0;
        int accountsSize = accounts.size();
        for(int i = 0; i < accountsSize; i++){
            int indexSize = accounts[i].size();
            int indexSum = 0;
            for(int j = 0; j < indexSize; j++){
                indexSum += accounts[i][j];
            }
            if(indexSum > highestValue) highestValue = indexSum;
        }

        return highestValue;
    }
};