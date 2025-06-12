class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for(int i = 1; i <= n; i++) {
            if (i == 1 || (i % 2 == 0 && i % 3 != 0 && i % 5 != 0)) {
                answer[i-1] = to_string(i);
                continue;
            }
            if (i % 3 == 0 && i % 5 == 0) {
                answer[i-1] = "FizzBuzz";
                continue;
            }
            if (i % 3 == 0) {
                answer[i-1] = "Fizz";
                continue;
            }
            if (i % 5 == 0) {
                answer[i-1] = "Buzz";
                continue;
            }
            answer[i-1] = to_string(i);
        }
        return answer;
    }
};
