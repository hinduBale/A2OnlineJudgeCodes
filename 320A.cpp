//1 14 144
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int Muggle=0;
	string input;
	cin >> input;
	//cout << "length of the input:\n" <<input.length();
	for(int i = 1; i <= input.length(); ++i)
	{

		if(stoi(input[i])*stoi(input[i+1])*stoi(input[i+2]) == 16 && stoi(input[i])+stoi(input[i+1])+stoi(input[i+2]) == 9)
		{
			i += 3;
		}
		else if(stoi(input[i])*stoi(input[i+1]) == 4 && stoi(input[i])+stoi(input[i+1] == 5))
		{
			i += 2;
		}
		else if(input[i] == '1' && input[i+1] != '4')
		{
			++i;
		}
		else
		{
			++Muggle;
			break;
		}
	}
	if(Muggle == 0)
	{
		cout <<"YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	return 0;
}
