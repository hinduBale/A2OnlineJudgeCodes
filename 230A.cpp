#include<bits/stdc++.h>

using namespace std;

bool sortcol( const vector<int>& v1,const vector<int>& v2 ) 
{ 
    return v1[0] < v2[0]; 
} 
//I don't understand this function either...
int main()
{
	int Ppower, level, Dinput,flag = 0;
	cin >> Ppower >> level;
	//cout << level << "\tIt is the value of level....\n";
	/*vector< vector< int > > myvector( rows ) ;
	for( int i =0 ; i < rows ; i++ ) {
	for ( int j=0 ; j < columns ; j++ ) {
	cin >> value ;
	myvector [ i ].push_back ( value ) ;*/
	vector <vector <int> > Dragons(level);
	for(int i = 0; i< level; ++i)
	{
		for(int j = 0; j < 2; ++j)
		{
			cin >> Dinput;
			Dragons[i].push_back(Dinput);
		}
	}
	/*Dragons.resize(2,vector<int>(level)); //Idk wtf is going on here ...
	if(level == 1)
	{
		cin >> Dpower >> Dbonus;
		if(Ppower >= Dpower)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		for(int i=0; i<level; i++)
    	{
       		for(int j=0; j<2; j++)
       		{
          		cin>>Dragons[i][j];
       		}
    	}	
	*/
    
	/*for(int i = 0; i < level; ++i)
	{
		for(int j = 0; j < 2; ++j)
		{
			cin >> Dinput;
			Dragons.push_back(Dinput);
		}
	}
	*/
	sort(Dragons.begin(), Dragons.end(), sortcol); 
	
	/*for(int i = 0; i < level; ++i)
	{
		for(int j = 0; j < 2; ++j)
		{
			cout << Dragons[i][j] << "\t ";
		}
		cout << endl;
	}
	*/
     
    for (int i = 0; i < level; i++) 
    {
    	if(Ppower >Dragons[i][0])
    	{
    		++flag;
    		Ppower += Dragons[i][1];
		}
	}
	if(flag == level)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
