class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count = 0;
        int valueToCheck = tickets[k];
        for(int i = 0; i < tickets.size(); i++){
            if(tickets[i] >= valueToCheck){
                count += valueToCheck;
            }else if(tickets[i] < valueToCheck){
                count += tickets[i];
            }
            if(i == k) valueToCheck--;
        }
        return count;
    }
};