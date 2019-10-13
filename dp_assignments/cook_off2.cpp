/*short and int: -32,767 to 32,767
**unsigned short int and unsigned int: 0 to 65,535
**long int: -2,147,483,647 to 2,147,483,647
**unsigned long int: 0 to 4,294,967,295
**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/

#pragma optimize('O3')
#include <bits/stdc++.h>
#define lli long long int
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define pf push_front
#define MOD 1000000007
#define F first
#define S second
#define inf INT_MAX
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define i_am_iron_man ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

template <class T>
void view(vector<T> v)
{
    for(auto i: v)
        cout << i << " ";
    cout << endl;
}
template <class T>
void view(T arr[], lli start, lli finish)
{
    for(lli i = start; i <= finish; i++)
        cout << arr[i] << " ";
    cout << endl;
}
template <class T>
void view(T arr[], lli n)
{
    for(lli i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    i_am_iron_man
    lli test;
    cin >> test;
    while(test--)
    {
        lli n, m, k, l, r, input1, input2;
        cin >> n >> m >> k >> l >> r;
        vector <lli> c(110);
        vector <lli> p(110);
        vector <lli> res;
        for(lli i = 0; i < n; i++)
        {
            cin >> c[i] >> p[i];
        }
//        for(auto i : p)
//            cout << i << " ";
//        cout << endl;
        for(lli i = 0; i < n; i++)
        {
            if(c[i] == k)
                continue;
            else if(c[i] < k)
            {
                if(k-c[i] > m)
                    c[i] = c[i] + m;
                else
                    c[i] = k;
            }
            else
            {
                if(c[i] - k > m)
                    c[i] = c[i] - m;
                else
                    c[i] = k;
            }
        }
//        for(auto i : c)
//            cout << i << " ";
//        cout << endl;
        for(lli i = 0; i < n; i++)
            if(c[i] >= l && c[i] <= r)
                res.pb(p[i]);
//        for(auto i : res)
//            cout << i << " ";
//        cout << endl;
        if(res.size() > 0)
        {
            sort(res.begin(), res.end());
            cout << res.front() << endl;
        }
        else
            cout << "-1" << endl;

    }
    return 0;
}
