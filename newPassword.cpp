#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define pb push_back
#define MOD 1e9+7

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    //What we want here is to print from alphabets from a to a+k till n.
    char alphabets[26];
    for(int i = 97; i <= 122; i++)
        alphabets[i-97] = i;

    int res1 = n/k;
    int res2 = n%k;
    for(int j = 0; j < res1; j++)
    {
        for(int i = 0; i < k; i++)
            cout << alphabets[i];
    }
    for(int k = 0; k < res2; k++)
        cout << alphabets[k];

    return 0;
}
