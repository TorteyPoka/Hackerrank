#include<iostream>

using namespace std;

int main()
{
    int t,n1(0), n2(1), n3, n, sum(0);

    cin>>n;      
    for(int i=1;i<n;++i) 
    {    
        n3=n1+n2;
        if(n3%2==0)
            sum+=n3;      
        n1=n2;    
        n2=n3;    
    }

    cout<<sum;
}