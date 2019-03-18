//#include <bits/stdc++.h>
//#define li long int
//
//using namespace std;
//
//long int largest(long int arr[],long int n)
//{
//    // Initialize maximum element
//    int max = arr[0];
//
//    // Traverse array elements
//    // from second and compare
//    // every element with current max
//    for (int i = 1; i < n; i++)
//        if (arr[i] > max)
//            max = arr[i];
//
//    return max;
//}
//
//int main()
//{
//    li customers, value, index = 0, j = 0;
//    cin >> customers;
//    li LawdaFlag[customers] = {0};
//    li lund[customers][2] = {0,0};
//    vector <vector <li> > time( customers );
//    for( li i =0 ; i < customers ; i++ ) {
//        for ( li j=0 ; j < 2 ; j++ ) {
//            cin >> value ;
//            time [ i ].push_back ( value ) ;
//    } }
////    for(int i = 0; i < customers; ++i)
////    {
////        for(int j = 0; j < 2; ++j)
////        {
////            cout << time[i][j]<<endl;
////        }
////   }
//    for(li i = 0; i < (customers - 1); i++)
//    {
//        if(time[i][0]==time[i+1][0] && time[i][1]==time[i+1][1])
//        {
//            lund[j][0] = time[i][0];
//            lund[j][1] = time[i][1];
//            index = i+1;
//            LawdaFlag[j] = 1;
//        }
//    }
//    for(li i = index; i < (customers-1); ++i)
//    {
//        if(time[i][0]==time[i+1][0] && time[i][1]==time[i+1][1])
//        {
//            if(lund[j][0] == time[i+1][0] && lund[j][1] == time[i+1][1])
//            {
//                LawdaFlag[j]++;
//            }
//            else if(lund[j][0] != time[i+1][0] || lund[j][1] != time[i+1][1])
//            {
//                j++;
//                LawdaFlag[j]++;
//            }
//        }
//    }
//    cout << j;
////    sort(LawdaFlag, LawdaFlag+j);
////    cout << (LawdaFlag[j-1]+1) << endl;
//    return 0;
//}



#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt=1, maxm=1;
    int A[n][2];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> A[i][0] >> A[i][1];
        if(A[i-1][0] == A[i][0] && A[i-1][1]==A[i][1])
        {
           cnt++;
        }
        else
        {
           cnt = 1;
        }
        maxm = max(maxm, cnt);
     }
    cout << maxm <<endl;
    return 0;
}
