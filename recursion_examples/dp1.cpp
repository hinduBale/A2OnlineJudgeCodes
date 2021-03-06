//#include <bits/stdc++.h>
//#define eb emplace_back
//#define lli long long int
//using namespace std;
//
//lli dp[200010][3];
//
//int solve(int index, int last, int n, vector<int> v)
//{
//    if(index == n)
//        return 0;
//    if(dp[index][last] != -1)
//        return dp[index][last];
//    if(last == 2)
//        return dp[index][last] = v[index] + solve(index+1, 0, n, v);
//    return dp[index][last] = min(solve(index+1, last+1, n,v), v[index] + solve(index+1, 0, n,v));
//}
//
//int main()
//{
//    for(int i = 0; i < 200010; ++i)
//        for(int j = 0; j < 3; j++)
//            dp[i][j] = -1;
//    int n,  input;
//    cin >> n;
//    vector<int> v;
//    for(int i = 0; i < n; i++)
//    {
//        cin >> input;
//        v.eb(input);
//    }
//    cout << solve(0,0,n,v) << endl;
//    return 0;
//}
/*short and int: -32,767 to 32,767
**unsigned short int and unsigned int: 0 to 65,535
**long int: -2,147,483,647 to 2,147,483,647
**unsigned long int: 0 to 4,294,967,295
**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/

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
lli dp[200010] = {-1};
int main()
{
    i_am_iron_man
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    //cout << v[0] << " " << v[1] << " "<< v[2] << endl;
    dp[0] = v[0];
    dp[1] = v[1];
    dp[2] = v[2];
    for(int i = 3; i < n; i++)
    {
        dp[i] = min(min(dp[i-1], dp[i-2]),dp[i-3])+v[i];
    }
    cout << min(min(dp[n-1], dp[n-2]), dp[n-3]) << endl;
    return 0;
}
