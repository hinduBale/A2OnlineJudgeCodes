#include <bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define pb push_back

using namespace std;

int main()
{
    int test, input = 0;
    cin >> test;
    vector <int> v;
    for(int i = 0; i < test; i++)
    {
        cin >> input;
        v.pb(input);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }

    return 0;
}
