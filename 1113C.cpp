#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define pb push_back

using namespace std;

lli f(lli a) {
     lli res[] = {a,1,a+1,0};
     return res[a%4];
}

lli getXor(lli a, lli b) {
     return f(b)^f(a-1);
}

int main()
{
    lli n, index = 0, flag = 0, xor1 = 0, xor2 = 0;
    cin >> n;
    vector <lli> va;
    vector <lli> ve;
    vector <lli> vo;
    vector< pair <lli,lli> > v;
    while(n--)
    {
        lli e;
        cin >> e;
        va.pb(e);
        if(e%2 != 0)
        {
            vo.pb(e);
        }
        else
        {
            ve.pb(e);
        }
    }
    sort(ve.begin(), ve.end());
    sort(vo.begin(), vo.end());
    if(vo[vo.size()-1] > ve[ve.size()-1])
    {
        for(lli i = 0 ; i < vo.size(); ++i)
        {
            if(vo[i] > ve[ve.size()-1])
            {
                index = i;
                break;
            }
        }
        vo.resize(index+1);

    }
    else if(ve[ve.size()-1] > vo[vo.size()-1])
    {
        for(lli i = 0 ; i < ve.size(); ++i)
        {
            if(ve[i] > vo[vo.size()-1])
            {
                index = i;
                break;
            }
        }
        ve.resize(index+1);
    }

        for(lli i = 0; i < ve.size(); ++i)
        {
            for(lli j = 0; j < vo.size(); ++j)
            {
                if(vo[j] > ve[i])
                {
                    v.pb( make_pair(ve[i], vo[j]));
                }
            }

        }
        for(lli i = 0; i < vo.size(); ++i)
        {
            for(lli j = 0; j < ve.size(); ++j)
            {
                if(ve[j] > vo[i])
                {
                    v.pb( make_pair(vo[i], ve[j]));
                }
            }
        }
    vector< pair <lli,lli> >::iterator ip;
    sort(v.begin(), v.end());
    ip = unique(v.begin(), v.begin() + v.size());
    v.resize(distance(v.begin(), ip));
//    for(lli i = 0; i < v.size(); i++)
//    {
//        cout << v[i].first << " " <<v[i].second << endl;
//    }
   for(lli i = 0; i < v.size(); ++i)
   {
//       cout << "For this " <<v[i].first << " " << v[i].second <<endl;
      lli mid = ((v[i].first+v[i].second)-1)/2;
      lli even = ((v[i].second-v[i].first)+1);
      if(even%2 == 0)
      {
           xor1 = getXor(va[v[i].first-1], va[mid-1]);
           xor2 = getXor(va[mid], va[v[i].second-1]);
           if(xor1 == xor2)
           {
                ++flag;
           }
           xor1 = 0, xor2 = 0;
       }
   }
   cout << flag << endl;

    return 0;
}
