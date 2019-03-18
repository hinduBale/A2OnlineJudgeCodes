#include <bits/stdc++.h>

using namespace std;

int main()
{
    int primeArray[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n, m, pos;
    cin >> n >> m;
    for(int i = 0; i < 15; i++)
    {
        if(n == primeArray[i])
        {
            pos = i;
        }
    }
    if(primeArray[pos + 1] == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
