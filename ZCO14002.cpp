#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007

using namespace std;

int main()
{
    lli input;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
    for(lli i = 0; i < 3; i++)
    {
        cin >> input;
        v.pb(input);
    }
    lli ans = min(v[0], min(v[1], v[2]));
    cout << ans << endl;


    return 0;
}


