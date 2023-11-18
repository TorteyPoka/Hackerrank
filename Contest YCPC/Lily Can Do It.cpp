#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t, n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        long long a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a, a+n, greater<int>());

        for(int i=0; i<n; i++)
        {
            long long odd = a[i]&1;
            long long even = a[i]&0;

            if(odd)
            {
                cout << ((a[i+1]&1) ? "NO" : "YES") << endl;
                break;
            }
            else if(even)
            {
                cout << ((a[i+1]&1) ? "YES" : "NO") << endl;
                break;
            }
        }
    }
    return 0;
}