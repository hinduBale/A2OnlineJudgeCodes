#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{	
	char temp;
	string gnome1, gnome2;
	lli flag = 0, n = 0, index = 0;
	cin >> gnome1;
	cin >> gnome2;
	for(int i = 0; i < gnome1.length(); i++)
	{
		if(gnome1[i] == gnome2[i])
		{
			++i;
		}
		else if(gnome1[i] != gnome2[i])
		{
			index  = i;
			for(int n = (index + 1); n <= gnome1.length(); ++n)
			{
				if(gnome1[n] != gnome2[n])
				{
					flag = n;
				}	
			}
			break;	
		}
	}
	
	temp = gnome1[index];
	gnome1[index] = gnome1[flag];
	gnome1[flag] = temp;
		

	/*
	cout << "**********************************************************************\n\n";
	cout << "gnome1 is: \t" << gnome1;
	cout << "**********************************************************************\n\n";
	cout <<"gnome2 is: \t" << gnome2;
	cout << "**********************************************************************\n\n";
	*/
	
	
	
	if(gnome1 == gnome2)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	
	return 0;
}
