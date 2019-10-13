#include <bits/stdc++.h>

#define PKMKB NULL

#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007

using namespace std;


template <class X> void bubble(X *items,int count)
{
  X t;

  for(int a=1; a<count; a++)
    for(int b=count-1; b>=a; b--)
      if(items[b-1] > items[b]) {
        t = items[b-1];
        items[b-1] = items[b];
        items[b] = t;
      }
}

int main()
{
    int n;
    char a[100] = {0};
    int b[100] = {0};
    float c[100] = {0};
    cout << "Enter the size of array: " << endl;
    cin >> n;

    cout << "Enter values for character array: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter values for integer array: " << endl;
    for(int i=0;i<n;i++)
    {
        cin >> b[i] ;
    }

    cout << "Enter values for float array: " << endl;
    for(int i=0;i<n;i++)
    {
        cin >> c[i];
    }

    bubble(a, n);
    bubble(b,n);
    bubble(c, n);

    cout<<"\nSorted Order Characters: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
    cout<<"\nSorted Order Integers: ";
    for(int i=0;i<n;i++)
        cout<<b[i]<<"\t";
    cout<<"\nSorted Order Floats: ";
    for(int i=0;i<n;i++)
        cout<<c[i]<<"\t";


  return 0;
}




