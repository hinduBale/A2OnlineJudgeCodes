#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		string snum;
		cin >> snum;
		set<char>s (snum.begin(), snum.end());
		int i = 0;
		for(auto x : s)
			snum[i++] = x;
		snum[i] = '/0';
		string res(snum.begin(), snum.begin()+i);
		sort(res.begin(), res.end());
		int flag = 0, flag0= 0, flag4 = 0, flag8=0;
        //cout << res << endl;
		for(int i = 0; i < res.length(); ++i)
        {
            if(res[i] == '0')
            {
                cout << "YES"<<" "<<"0"<<endl;
                flag0++;
                break;
            }
            else if(res[i] == '4')
            {
                flag4++;
                cout << "YES"<<" "<<"4"<<endl;
                break;
            }
            else if(res[i] == '8')
            {
                flag8++;
                cout << "YES"<<" "<<"8"<<endl;
                break;
            }
            else
                ++flag;
        }
        int eflag = 0;
        if(flag != 0 && flag0 == 0 && flag4==0 && flag8==0)
        {
            int i = 0;
           if(res[i] == '1')
           {
              if(res.find('2') != string::npos)
              {
                 cout << "YES"<<" "<<"12"<<endl;
              }
              else if(res.find('6') != string::npos)
              {
                 cout << "YES"<<" "<<"16"<<endl;
              }
              else
                ++eflag;
           }
           else if(res[i] == '3')
           {
              if(res.find('6') != string::npos)
              {
                 cout << "YES"<<" "<<"36"<<endl;
              }
              else
                ++eflag;
           }
           else if(res[i] == '5')
           {
              if(res.find('2') != string::npos)
              {
                 cout << "YES"<<" "<<"52"<<endl;
              }
              else if(res.find('6') != string::npos)
              {
                 cout << "YES"<<" "<<"56"<<endl;
              }
              else
                ++eflag;
           }
           else if(res[i] == '7')
           {
              if(res.find('6') != string::npos)
              {
                 cout << "YES"<<" "<<"36"<<endl;
              }
              else
                ++eflag;
           }
           else if(res[i] == '9')
           {
              if(res.find('2') != string::npos)
              {
                 cout << "YES"<<" "<<"92"<<endl;
              }
              else if(res.find('6') != string::npos)
              {
                 cout << "YES"<<" "<<"96"<<endl;
              }
              else
                ++eflag;
           }
           else if(res[i] == '2' || res[i] == '6')
            ++eflag;
        }
        if(eflag != 0 && flag0 == 0 && flag4 == 0 && flag8 == 0)
        {
            cout <<"NO" <<endl;
        }

	}
	return 0;
}
