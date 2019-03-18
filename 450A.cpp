#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() 
{
	lli kids, candies, input, answer;
	cin >> kids >> candies;
	queue <lli> qkids;
	queue <lli> index;
	for(int i = 0; i < kids; i++)
	{
		cin >> input;
		qkids.push(input);
		index.push(i);
	}
	while(!qkids.empty())
	{
		if(qkids.front() <= candies)
		{
			qkids.pop();
			index.pop();
		}
		else
		{
			qkids.push(qkids.front()-candies);
			index.push(index.front());
			qkids.pop();
			index.pop();
		}
		answer = index.back();
	}
	
	cout << (answer + 1) << endl;
	
	return 0;
}
