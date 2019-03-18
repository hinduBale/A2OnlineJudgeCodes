#include <bits/stdc++.h>
#define endl "\n"
#define lli long long int

using namespace std;

lli blocks(lli h1, lli w1, lli h2, lli w2)
{
    if(w1 == w2)
    {
        lli total = (w1+2)*((h1+1)+(h2+1));
        lli res = total - (w1*(h1+h2));
        return res;
    }
    else
    {
        lli Total = (w1+2)*((h1+1)+(h2+1));
        lli r = (w1*h1) + 2*(w2*h2);
        lli finaL = Total - r;
        return finaL;
    }

}

int main()
{
    lli h1, w1, h2, w2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << blocks(h1, w1, h2, w2) << endl;
    return 0;
}
