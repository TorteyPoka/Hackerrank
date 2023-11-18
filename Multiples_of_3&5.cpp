#include<bits/stdc++.h>

using namespace std;

unsigned long long sum(unsigned long long x)
{
    return x*(x+1)/2;
}

int main()
{
    unsigned int t;
    cin>>t;
    while (t--)
    {
        unsigned int l;
        cin>>l;

        l--;

        auto sum3 = 3*sum(l/3);
        auto sum5 = 5*sum(l/3);
        auto sum15 = 15*sum(l/3);
        cout<<sum3+sum5-sum15<<endl;
    }
    return 0;
}