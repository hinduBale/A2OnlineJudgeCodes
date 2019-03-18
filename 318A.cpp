#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
    lli n, k;
    cin >> n >> k;
    vector <lli> numbers;
    vector <lli> odd;
    vector <lli> even;
    vector <lli> finale;
    for(int i = 0; i < n; i++)
    {
        numbers.push_back(i+1);
    }
    for(int i = 0; i < numbers.size(); ++i)
    {
        if(numbers[i]%2 == 0)
        {
            even.push_back(numbers[i]);
        }
        else
        {
            odd.push_back(numbers[i]);
        }
    }
    for(int i = 0; i <odd.size(); ++i)
    {
        finale.push_back(odd[i]);
    }
    for(int i = 0; i < even.size(); ++i)
    {
        finale.push_back(even[i]);
    }
    cout << finale[k-1];
	return 0;
}
