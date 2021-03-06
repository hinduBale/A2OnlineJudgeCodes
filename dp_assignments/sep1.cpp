/*short and int: -32,767 to 32,767
**unsigned short int and unsigned int: 0 to 65,535
**long int: -2,147,483,647 to 2,147,483,647
**unsigned long int: 0 to 4,294,967,295
**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/

#pragma optimize('O3')
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

void multiply(lli a[3][3], lli b[3][3])
{
    lli mul[3][3];
    for (lli i = 0; i < 3; i++)
    {
        for (lli j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (lli k = 0; k < 3; k++)
                mul[i][j] = (mul[i][j]%10 + (a[i][k]%10 *b[k][j]%10)%10)%10;
        }
    }
    for (lli i=0; i<3; i++)
        for (lli j=0; j<3; j++)
            a[i][j] = mul[i][j];
}

lli power(lli F[3][3], lli n)
{
    lli M[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}};

    if (n==1)
        return F[0][0] + F[0][1];

    power(F, n/2);

    multiply(F, F);

    if (n%2 != 0)
        multiply(F, M);


    return F[0][0] + F[0][1] ;
}

lli findNthTerm(lli n)
{
    lli F[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}} ;

    return power(F, n-2)%10;
}
int main()
{
    i_am_iron_man
  //  preCal();
    lli test;
    cin >> test;
    while(test--)
    {
        lli n;
        cin >> n;
        lli power = (lli)log2(n);
        lli res = pow(2, power);
        cout << findNthTerm(res) << endl;
    }
    return 0;
}
