class Solution {
public:
    int fib(int N) {
        if (N <= 1) {
            return N;
        }

        int p = 0, q = 1, r = 1;

        for (int i = 1; i < N; i++) {
            r = p + q;
            p = q;
            q = r;
        }

        return q;
    }
};