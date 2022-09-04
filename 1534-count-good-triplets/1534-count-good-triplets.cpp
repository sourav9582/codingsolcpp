class Solution {
public:
    int countGoodTriplets(vector<int>& A, int a, int b, int c) {
         int N = A.size(), ans = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                for (int k = j + 1; k < N; ++k) {
     if (abs(A[i] - A[j]) <= a && abs(A[j] - A[k]) <= b && abs(A[i] - A[k]) <= c) ++ans;
                }
            }
        }
        return ans;
    }
};