#include <iostream>
using namespace std;

int uniquePaths(int m, int n) {
    int dp[n];
    for (int j = 0; j < n; j++) {
        dp[j] = 1;
    }

    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[j] += dp[j-1];
        }
    }

    return dp[n-1];
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    cout << "Number of unique paths: " << uniquePaths(m, n) << endl;

    return 0;
}

