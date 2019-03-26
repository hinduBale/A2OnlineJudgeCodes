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
       lli goodFlag = 0, worstFlag = 0;
       string spell;
       cin >> spell;
       lli n = spell.length();
       map <lli, char> vowel;
       for(lli i = 0; i < n; i++)
       {
           if(spell[i] == 'a' || spell[i] == 'e' || spell[i] == 'i' || spell[i] == 'o' || spell[i] == 'u')
           {
               vowel.insert(pair<lli, char> (i, spell[i]));
           }
       }
       map <lli, char> :: iterator it;
//       for(it = vowel.begin(); it != vowel.end(); ++it)
//       {
//           cout << (*it).first << " " << (*it).second << endl;
//       }

       vector <char> v;
       for(it = vowel.begin(); it != vowel.end(); ++it)
       {
           v.pb((*it).second);
       }
//       for(lli i = 0; i < v.size(); ++i)
//       {
//           cout << v[i] << endl;
//       }
       if(vowel.size() == 0)
        cout << "Good" << endl;
       else
       {
           for(lli i = 0; i < v.size()-1; i++)
           {
               if(v[i]<=v[i+1])
                ++goodFlag;
               else if(v[i]>=v[i+1])
                ++worstFlag;
           }
           if(v.size() == 1)
            cout << "Bad" << endl;
           else{
           if(goodFlag == v.size()-1)
            cout << "Good"<< endl;
           else if (worstFlag == v.size() - 1)
            cout << "Worst"<<endl;
           else
            cout << "Bad" << endl;
           }
       }

    }
    return 0;
}

