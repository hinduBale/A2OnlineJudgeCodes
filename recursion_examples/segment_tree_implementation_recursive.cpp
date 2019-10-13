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

int t[100010]; //Ideally it should be 4*n

void build(int a[], int v, int tl, int tr)
{
    if(tl == tr)
        t[v] = a[tl];
    else
    {
        int tm = (tl + tr)/2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[(v*2)+1];
    }
}

//vertex v is the current vertex, and tl and tr are the range of the array at the present vertex v.
//l and r are the boundaries of the query.

int sum(int v, int tl, int tr, int l, int r)
{
    if(l > r)
        return 0;
    if(l == tl and r == tr)
        return t[v];
    int tm = (tl + tr)/2;
    return sum(v*2, tl, tm, l, min(r, tm)) + sum((2*v)+1, tm+1, tr, max(l, tm+1), r);
}

void update(int v, int tl, int tr, int pos, int new_val)
{
    if(tl == tr)
        t[v] = new_val;
    else
    {
        int tm = (tl+tr)/2;
        if(pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update((v*2)+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] + t[(v*2)+1];
    }
}

void view_a(int entries, int a[])
{
    for(int i = 0; i < entries; i++)
        cout << a[i] << " ";
    cout << endl;
}

void view_t(int entries, int t[])
{
    for(int i = 0; i < entries; i++)
        cout << t[i] << " ";
    cout << endl;
}

int main()
{
    i_am_iron_man
    int entries = 0;
    int a[10010];
    cout << "Number of entries: " << endl;
    cin >> entries;
    for(int i = 0; i < entries; i++)
        cin >> a[i];
    cout << "Building the segment tree: " << endl;
    build(a, 1, 0, (entries-1));
    view_a(entries, a);
    update(1, 0, (entries-1), 2, 90);
    view_t(entries, t);
    return 0;
}

