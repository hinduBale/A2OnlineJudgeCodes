#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define endl "\n"
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli str, n, flag = 0;
    cin >> n;
    vector <lli> v;
    for(lli i = 0; i< n; i++)
    {
        cin >> str;
        v.pb(str);
    }
    sort(v.begin(), v.end());
    lli first = v[0];
    lli last = v[n-1];
    for(lli i = 0; i < n; i++)
    {
        if(v[i] != first && v[i] != last)
            ++flag;
    }

    cout << (flag)%MOD << endl;

    return 0;
}
