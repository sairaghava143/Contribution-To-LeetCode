class Fancy {
public:
    static constexpr int MOD = 1000000007;
    vector<int> sequence;
    long long add, mult;

    Fancy() {
        add = 0;
        mult = 1;
    }

    void append(int val) {
        sequence.push_back((val - static_cast<int>(add) + MOD) * pow(mult, MOD - 2) % MOD);
    }

    void addAll(int inc) {
        add = (add + inc) % MOD;
    }

    void multAll(int m) {
        mult = (mult * m) % MOD;
        add = (add * m) % MOD;
    }

    int getIndex(int idx) {
        if (idx >= static_cast<int>(sequence.size())) {
            return -1;
        }
        return static_cast<int>(((sequence[idx] * mult) % MOD + add) % MOD);
    }

private:
    long long pow(long long a, long long b) {
        long long res = 1;
        while (b > 0) {
            if (b & 1) {
                res = (res * a) % MOD;
            }
            a = (a * a) % MOD;
            b >>= 1;
        }
        return res;
    }
};
