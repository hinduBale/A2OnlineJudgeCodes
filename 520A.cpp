#include <bits/stdc++.h>
#define lli long long int

using namespace std;

lli Result[100001] = {0};

lli largest(lli arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

lli ans(vector<lli> v)
{
    for(lli i = 0; i < v.size(); ++i)
    {
        for(lli j = i+1; j < v.size(); ++j)
        {
            if(v[j] >= v[j-1])
            {
                ++Result[i];
            }
            else
                break;
        }
    }
    return largest(Result, v.size());
}
int main()
{
    lli n, input = 0;
    scanf("%lld", &n);
    vector <lli> lund;
    for(lli i = 0; i < n; ++i)
    {
        scanf("%lld", &input);
        lund.push_back(input);
    }
    printf("%lld\n",(ans(lund)+1 ));
//    for(int i = 0; i < 3; i++)
//    {
//        cout << Result[i] <<endl;
//    }
//    cout << "Lavda chaat lo mera\n";
    return 0;
}
