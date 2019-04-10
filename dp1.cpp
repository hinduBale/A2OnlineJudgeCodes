#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main()
{
    string ip;
    cin >> ip;
    lli len = ip.length();
    lli a[len+1];
    memset(a, 0, sizeof(a));
    for(lli i = 0; i < len; i++)
    {
        if(ip[i]%2 == 0)
            a[i] = 1;
    }
    for(lli i = len - 2; i >= 0; i--)
        a[i] += a[i+1];
    for(lli i = 0; i < len; i++)
        cout << a[i] << " ";
    return 0;
}

