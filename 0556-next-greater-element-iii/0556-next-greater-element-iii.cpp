class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);

        bool possible = next_permutation(s.begin(), s.end());

        if (possible == false) {
            return -1;
        }

        long long ans = stoll(s);

        if (ans > INT_MAX) {
            return -1;
        }

        return ans;
    }
};