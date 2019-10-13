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

vector <int> tree [100];

void addEdge(int x, int y)
{
    tree[x].eb(y);
}

int count_nodes(int root)
{
    if(tree[root].empty())
        return 1; // Counting the root.
    int ans = 0;
    for(auto i : tree[root])
        ans += count_nodes(i);
    return ans+1;
}

int height(int root)
{
    if(tree[root].empty())
        return 1;
    int ans = 0;
    for(auto i : tree[root])
        ans = max(ans, height(i));
    return ans+1;
}

int main()
{
    i_am_iron_man
    addEdge(0, 1); addEdge(0, 2); addEdge(0, 3); addEdge(2, 4); addEdge(2, 5); addEdge(3, 6);
    int root = 0;
    cout << "Count is: " << count_nodes(root) << endl;
    cout << "Height is: " << height(root) << endl;
    	/*
            0
           /|\
          / | \
         1  2  3
           /\   \
          /  \   \
		 4    5   6

	*/
    return 0;
}
