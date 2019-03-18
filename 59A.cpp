#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int CapFlag =0;
    int SmallFlag =0;
    int len = input.length();
    for(int i = 0; i < len; i++)
    {
        if(input[i] > 64 && input[i] < 91)
        {
            ++CapFlag;
        }
        else if(input[i] > 96 && input[i] < 123)
        {
            ++SmallFlag;
        }
    }
    if(CapFlag > SmallFlag)
    {
        transform(input.begin(), input.end(), input.begin(), ::toupper);
        cout << input;
    }
    else
    {
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        cout << input;
    }

    return 0;
}
