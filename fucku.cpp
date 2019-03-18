#include <bits/stdc++.h>
#define lli long long int

using namespace std;
 
int main()
{
	int test;
	cin >> test;
	vector <int> ans (2000001, 0);
	for(int i = 0; i < 2000001; i++)
	{
		int x = i;
		int flag = 0;
		while(x != 0)
		{
			if(x % 16 > 9)
				flag++;
			x /= 16;
		}
		ans[i] = ans[i-1] + flag; 
	}
	while(test--)
	{
		lli l, r;
		cin >> l >> r;
		cout << ans[r]-ans[l-1] <<endl;
	}
	return 0;
}
