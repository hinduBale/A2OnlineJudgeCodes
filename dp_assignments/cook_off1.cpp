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
        int n;
        cin >> n;
        int sex = n/2;
        int arr[n][n];
        int left[n];
        int right[n];
        int max_diff_left = INT_MIN;
        int max_diff_right = INT_MIN;
        memset(left, 0, sizeof(left));
        memset(right, 0, sizeof(right));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if(j < sex)
                    left[i] += arr[i][j];
                else
                    right[i] += arr[i][j];
            }
            if((left[i] - right[i]) > 0 && (left[i] - right[i]) > max_diff_left)
                 max_diff_left = (left[i] - right[i]);
            else if((left[i] - right[i]) < 0 && abs(left[i] - right[i]) > max_diff_right)
                max_diff_right = abs(left[i] - right[i]);
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
//        int left_sum = 0;
//        int right_sum = 0;
//        for(int i = 0; i < n; i++)
//            left_sum += left[i];
//        for(int i = 0; i < n; i++)
//            right_sum += right[i];
//        int ans1 = left_sum - right_sum;
//        if(ans1 > 0)
//        {
//            if((ans1 - max_diff_left) < ans1 && (ans1 - max_diff_left) >= 0)
//                cout << (ans1 - max_diff_left) << endl;
//            else
//                cout << ans1 << endl;
//        }
//        else if(ans1 < 0)
//        {
//            ans1 = abs(ans1);
//            if((ans1 - max_diff_right) < ans1 && (ans1 - max_diff_right) >= 0)
//                cout << (ans1 - max_diff_right) << endl;
//            else
//                cout << ans1 << endl;
//        }
    }
    return 0;
}
