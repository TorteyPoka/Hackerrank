#include<iostream>
using namespace std;

int main() {
    int t;
    string s, s1, s0;
    cin >> s;

    for (int i = 0; i < sizeof(s); i++) {
        if (s[i] >= '0' && s[i] <= '9')
        {
            t = s[i] - '0';
        } 
        else 
        {
            if (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/') 
            {
                s0 += s[i];
            } 
            else 
            {
                for (int j = 0; j < t; j++) 
                {
                    s1 += s0;
                }
                s0 = "";
                t = 0;
                s1 += s[i];
            }
        }
    }

    cout << s1 << endl;
    return 0;
}