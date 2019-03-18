#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main()
{
    string input;
    lli k, j = 1, ArrSize = 0;
    char Array[2048];
    vector <lli> Lund;
    cin >> input >> k;
    sort(input.begin(), input.end());
    for(int i = 0; i < (input.length() - 1); i++)
    {
        Array[0] = input[0];
        if((input[i+1] - input[i]) != 0)
        {
            Array[j] = input[i+1];
            ++j;
        }
    }

    lli min = 0;

    //for(int i = 0; i < j; i++)
    //{

    //}

    for(int i = 0; i < j; ++i)
    {
        cout << Array[i];
    }


    return 0;
}
