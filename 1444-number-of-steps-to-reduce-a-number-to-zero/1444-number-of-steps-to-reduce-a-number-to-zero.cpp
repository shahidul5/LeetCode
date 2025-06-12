class Solution {
public:
    int numberOfSteps(int num) {
        int totalSteps = 0;
        while(num) {
            if (num % 2 == 0) {
                num /= 2;
                totalSteps++;
            } else {
                num--;
                totalSteps++;
            }
        }
        return totalSteps;
    }
};