#include <bits/stdc++.h>
#define MOD 1000000007
#define lli long long int

using namespace std;

lli count(string a, string b)
{
    lli m = a.length();
    lli n = b.length();

    lli lookup[m + 1][n + 1] = { { 0 } };

    for (lli i = 0; i <= n; ++i)
        lookup[0][i] = 0;

    for (lli i = 0; i <= m; ++i)
        lookup[i][0] = 1;

    for (lli i = 1; i <= m; i++)
    {
        for (lli j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
                lookup[i][j] = lookup[i - 1][j - 1] +
                               lookup[i - 1][j];

            else
                lookup[i][j] = lookup[i - 1][j];
        }
    }

    return lookup[m][n];
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        lli n, j = 0;
        cin >> n;
        vector <char> v;
        string input1, input2;
        cin >> input1;
        input2 = input1;
        sort(input1.begin(), input1.end());
        v.push_back(input1[0]);
        for(lli i = 1; i < input1.length(); ++i)
        {
            if(input1[i] != v[j])
            {
                ++j;
                v.push_back(input1[i]);
            }
        }
        string output(v.begin(), v.end());
        cout << (count(input2, output)) % MOD <<endl;
    }
    return 0;
}
