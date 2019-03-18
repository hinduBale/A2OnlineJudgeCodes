#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define lli long long int

using namespace std;

int main()
{
    lli n, se = 0, so = 0, flag = 0;
    cin >> n;
    vector <lli> v;
    for(lli i = 0; i < n; i++)
    {
        lli input = 0;
        cin >> input;
        v.pb(input);
    }
    for(lli i = 0; i < n; i++)
    {
        vector <lli> vf(v.begin(), v.end());
        vf.erase(vf.begin()+i);
        for(lli i = 0; i < n - 1; ++i)
        {
            if(i%2 == 0)
                so += vf[i];
            else
                se += vf[i];
        }
        if(so == se)
            ++flag;
        se = 0, so = 0;
    }
    cout << flag << endl;
    return 0;
}
