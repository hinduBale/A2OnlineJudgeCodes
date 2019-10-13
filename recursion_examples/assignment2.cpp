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

int to_int(string str)
{
    stringstream s(str);
    int p = 0;
    s >> p;
    return p;
}

void printCodes(string str, string ans)
{
    if(str.empty())
    {
        cout << ans << endl;
        return;
    }

    string firstChar(1, str[0]);
    string rest1 = str.substr(1);

    if(to_int(firstChar) > 0)
    {
        char temp = (char)(to_int(firstChar) + 'a' - 1);
        printCodes(rest1, ans+temp);
    }

    if(to_int(firstChar) == 0)
        printCodes(rest1, ans);

    if(str.length() >= 2)
    {
        string first2Chars = str.substr(0, 1);
        string rest2 = str.substr(2);

        if(to_int(first2Chars) > 0 && to_int(first2Chars) <= 26)
           {
               char temp = (char)(to_int(first2Chars) + 'a' - 1);
               printCodes(rest2, ans+temp);
           }
    }
}

int main()
{
    i_am_iron_man
    printCodes("1123", "");
    return 0;
}
