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
    vector <lli> v;
    lli given, res, keys, cnt = 0, mul =given;
    cin >> given >> res;
    cin >> keys;
    for(lli i = 0; i < keys; i++)
    {
        lli input;
        cin >> input;
        v.pb(input);
    }
    lli want = res/given;
    if(res%given != 0)
        cout << "-1" << endl;
    else
    {
        sort(v.begin(), v.end(), greater<lli>());
            for(lli i = 0; i < keys; i++)
            {
                if(want % v[i] == 0 && ((mul != res) ||(mul < res)))
                {
                    mul = (mul * v[i])%100000;
                    ++cnt;
                    i = 0;
                }
            }

        cout << cnt << endl;
    }
    return 0;
}


