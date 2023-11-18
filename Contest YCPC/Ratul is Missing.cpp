#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') 
        {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } 
        else 
        {
            word += s[i];
        }
    }
    if (!word.empty()) 
    {
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++) 
    {
        if (words[i].find("Ratul") != string::npos) 
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}