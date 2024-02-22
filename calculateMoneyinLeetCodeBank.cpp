class Solution {
public:
    int totalMoney(int n) {
        int m = n - 7;
        int finalRes = 28;
        int week = 1;
        if (n < 7) {
            int res = n * (n + 1) / 2;
            return res;
        } else {
            int sum = 0;
            week++;
            for (int i = week; i <m%7; i++) {
                sum += i;
                finalRes += sum;
            }
        }
        return finalRes;

    return result;
    }
};
