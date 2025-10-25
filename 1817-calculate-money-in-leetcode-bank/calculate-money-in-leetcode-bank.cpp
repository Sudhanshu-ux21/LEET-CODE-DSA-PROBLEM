class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int count = n / 7;
        int rem = n % 7;
        int cal = 0;

        // sum for complete weeks
        for (int i = 0; i < count; i++) {
            cal += 28 + 7 * i;  // week 1 = 28, week 2 = 35, week 3 = 42, ...
        }

        // sum for remaining days
        for (int i = 1; i <= rem; i++) {
            sum += count + i;
        }

        int result = cal + sum;
        return result;
    }
};
