class Solution {
public:
    int countStrings(int n) {
        int a = 1, b = 2;

        if (n == 1) return 2;

        for (int i = 2; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }

        return b;
    }
};