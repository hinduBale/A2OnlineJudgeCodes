#include <bits/stdc++.h>

using namespace std;

int bell_triangle(int n)
{
    int dp[n+1][n+1];
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++)
    {
        dp[i][0] = dp[i-1][i-1];
        for(int j = 1; j <= i; j++)
            dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
    }
    return dp[n][0];
}

int main()
{
    cout << "BELL number of n = ??" <<endl;
    int n;
    cin >> n;
    cout << "It is: " << bell_triangle(n) << endl;
    return 0;
}
