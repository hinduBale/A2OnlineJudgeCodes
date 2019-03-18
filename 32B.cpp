//Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--».
//.-.--

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cin >> input;
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == '.')
        {
            cout << "0";
        }
        else if(input[i] == '-')
        {
            if(input[i+1] == '.')
            {
                cout << "1";
                ++i;
            }

            else if(input[i + 1] == '-')
            {
                cout << "2";
                ++i;
            }

        }

    }
    return 0;
}
