#include <bits/stdc++.h>
using namespace std;
#define krep(i, k, n) for (int i = k; i < (int)(n); i++)

#define prep(i, n) for (int i = 1; i <= (int)(n); i++)

#define irep(i, n) for (int i = (int)n - 1; i >= 0; i--)


char int_to_alphabet(int i) {
    // i = 0 -> a
    // i = 25 -> z
    return i + 'a';
}

int alphabet_to_int(char s) {
    return s - 'a';
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    krep(i, 0, N) cin >> A[i];

    string result = "No";
    krep(i, 0, N) {
        krep(j, i+1, N) {
            krep(k, j+1, N) {
                if (A[i] + A[j] + A[k] == 1000) result = "Yes";
            }
        }
    }

    cout << result << endl;
    return 0;

}