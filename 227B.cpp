#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int ArrSize, VasyaPass = 0, PetyaPass = 0;
    cin >> ArrSize;
    long long int Array[ArrSize];
    for(long long int i = 0; i < ArrSize; i++)
    {
        cin >> Array[i];
    }
    long int TestArrSize;
    cin >> TestArrSize;
    long long int TestArray[TestArrSize];
    for(long long int i = 0; i < TestArrSize; i++)
    {
        cin >> TestArray[i];
    }
    for(long long int i = 0; i < TestArrSize; i++)
    {
       long long int flagvasya=0,flagpetya=0;
        for(long long int j = 0; j < ArrSize; j++)
        {
            if(TestArray[i] != Array[j] && flagvasya == 0)
            {
                ++VasyaPass;
                //cout << VasyaPass;
            }
            if(TestArray[i] == Array[j] && flagvasya == 0)
            {
                ++VasyaPass;
                flagvasya++;
            }
            if(TestArray[i] != Array[ArrSize - j - 1 ] && flagpetya == 0)
            {
                ++PetyaPass;
            }
           if(TestArray[i] == Array[ArrSize - j - 1 ] && flagpetya == 0)
            {
                ++PetyaPass;
                flagpetya++;
            }
        }

    }




    //cout << "****************************************************"<<endl;
    cout << VasyaPass << endl;
    cout << PetyaPass << endl;

    return 0;
}
