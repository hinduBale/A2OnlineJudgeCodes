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

int ways(int n, int* change, int* dp, int amount)
{
    if(amount <= change[0])
        return 0;

    return ways(n, change, dp, amount - change[])
}

int main()
{
    i_am_iron_man
    cout << "Enter the number of denominations and the denominations: "<< endl;
    int n;
    cin >> n;
    int change[n];
    int dp[n];
    memset(dp, -1, sizeof(dp));
    for(int i = 0; i < n; i++)
        cin >> change[i];
    sort(change.begin(), change.end());
    cout << "Enter the amount: " << endl;
    int amount;
    cin >> amount;
    cout << ways(n, change, dp, amount) << endl;
    return 0;
}
int fun(int n)
{
    int count = 0;
    for(int i = n; i > 0; i /=2)
        for(int j = 0; j < i; j++)
            count += 1;
    return count;
}
In how many ways can a convex polygon with 12 sides cutinto triangles by connecting verticesby connecting vertices with non-crossing line segments
On a cliff of length 110m at  height 240m, 10 cats are positioned facing wither left or tight direction
