#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define pb push_back

using namespace std;

int main()
{
    string input;
    cin >> input;
    vector <char> v;
    for(int i = 0; i < input.length(); i++)
    {
        if(i % 2 == 0)
            v.pb(input[i]);
    }
//    for(int i = 0; i < v.size(); i++)
//    {
//        cout << v[i] <<endl;
//    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        if(i != v.size() - 1)
            cout << v[i] << "+";
        else
            cout << v[i];
    }
    return 0;
}
