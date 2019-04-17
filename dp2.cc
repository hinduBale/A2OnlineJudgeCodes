//#PKMKB
//455A

#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007

using namespace std;

int main()
{
    lli n, lim = 100001, input;
    cin >> n;
    lli cnt[lim] = {0};
    lli dp[lim] = {0};
    for(lli i = 0; i < n; i++)
    {
        cin >> input;
        cnt[input]++;
    }
    dp[0] = 0;
    dp[1] = cnt[1];
    for(lli i = 2 ; i < lim; i++)
        dp[i] = max(dp[i-1], dp[i-2]+i*cnt[i]);

    cout << dp[lim-1] << endl;
    return 0;
}
