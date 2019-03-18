#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli test;

    cin >> test;
    while(test--)
    {
      lli zero = 0, one = 0;
      lli sz;
      string s;
      cin >> sz;
      cin >> s;
      lli flag = 0;
      for(lli i = 0; i < s.length(); i++)
      {
          if(s[i] == '0')
            ++zero;
          else
            ++one;
      }
      if(one%3 == 0 && zero >= 1)
      {
          if(s[s.size()-1] == '0')
            cout << "0" << endl;
         else
            cout <<"1" <<endl;
        for(lli i = 0; i < zero-1; i++)
            cout << "0";
        for(lli i = 0; i < one; i++)
            cout << "1";
       cout <<"0" << endl;
      }
      else
        cout << "-1"<<endl;

    }
    return 0;
}


