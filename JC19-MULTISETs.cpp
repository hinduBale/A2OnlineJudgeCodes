#include <bits/stdc++.h>

#define lli long long int
#define MOD 1000000007

using namespace std;

int main()
{
    lli n, input;
    cin >> n;
   cout<< n+1 ;
    return 0;
}

#include<bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
    int a, input;
    cin>>a;
    vector<lli> v1, v2;
    for (int i=0; i<a; i++)
    {
        cin>>input;
        v1.push_back(input);
    }
    for (int i=0; i<a; i++)
    {
        cin>>input;
        v2.push_back(input);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    lli sum1 = 0;
    for (int i=0; i<a; i++)
        sum1 += abs(v1[i] - v2[i]);
    sum1 = sum1%1000000007;
    cout<<sum1<<endl;
    return 0;
}
