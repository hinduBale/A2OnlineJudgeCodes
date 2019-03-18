#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main()
{
    lli test;
    cin >> test;
    while(test--)
    {
        string input;
        cin >> input;
        lli a, b;
        cin >> a >> b;
        sort(input.begin()+a, input.begin()+b, greater<>());
        cout << input << endl;
    }
    return 0;
}
