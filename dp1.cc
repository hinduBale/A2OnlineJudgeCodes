//#PKMKB
//580A

#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n, input, ans = 1;
    cin >> n;
    lli arr[100000];
    lli dp[100000];
    for(lli i = 0; i < n; i++)
    {
        cin >> input;
        arr[i] = input;
    }
    dp[0] = 1;
    for(lli i = 1; i < n; i++)
    {
        if(arr[i]- arr[i-1] >= 0)
        {
            dp[i] = dp[i-1] + 1;
            ans = max(ans, dp[i]);
        }
        else
            dp[i] = 1;
    }

    cout << ans << endl;

    return 0;
}
