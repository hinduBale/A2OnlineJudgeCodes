#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll k,c=0,i;
    cin>>k;
    for(i=19;;i++)
    {
        ll n=i;
        ll sum=0;
        while(n)
        {
            sum+=(n%10);
            if(sum>10)
                break;
            n/=10;
        }
        if(sum==10)
            c++;
        if(sum==10 && c==k)
            break;
    }
    cout<<i;
    return 0;
}
