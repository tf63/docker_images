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
    int N , L;
    cin >> N >> L;

    int a;
    int result = 0;
    prep(i, N) {
        cin >> a;
        if (a >= L) {
            result++;
        }
    }
    cout << result << endl;

    return 0;

}