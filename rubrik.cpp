#include <bits/stdc++.h>
using namespace std;

int minOperationsTransform(vector<int>& A, vector<int>& B) {
    int N = A.size();
    unordered_map<int,int> pos;
    for(int i = 0; i < N; i++) pos[A[i]] = i;
    vector<int> P(N);
    for(int i = 0; i < N; i++) P[i] = pos[B[i]];
    int max_len = 1, curr_len = 1;
    for(int i = 1; i < N; i++) {
        if(P[i] == P[i-1] + 1) {
            curr_len++;
            max_len = max(max_len, curr_len);
        } else curr_len = 1;
    }
    return N - max_len;
}

int main() {
    vector<int> A = {4, 2, 3, 1, 5, 6};
    vector<int> B = {3, 1, 4, 6, 5, 2};
    cout << minOperationsTransform(A, B) << endl;
}
