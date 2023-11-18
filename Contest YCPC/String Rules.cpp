#include<iostream>

using namespace std;

int main()
{
    int t;
    string s, s1, s0;
    cin>>s;
    int l = s.length();

    for(int i=0; i<l; i++)
    {
        if(s[i]>=0 || s[i]<=9)
        {
            t = s[i];
        }
        else
        {
            if(s[i] != '+' || s[i] != '-' || s[i] != '*' || s[i] != '/')
            {
                s0[i] = s[i];
            }
            else
            {
                s1[i] = s[i];
                for(int i=0; i<t; i++)
                {
                    s1+=s0;
                }
            }
        }
        cout<<s1<<endl;
    }

    return 0;

}