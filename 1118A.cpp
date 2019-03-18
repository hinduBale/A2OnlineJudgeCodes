#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        lli n;
        lli a, b;
        cin >> n >> a >> b;
        if(a > (b/2))
        {
            if(n%2 == 0)
                cout << (n/2)*b << endl;
            else
                cout << (((n-1)/2)*b) + a <<endl;
        }
        else
        {
            cout << n*a << endl;
        }
    }
    return 0;
}
