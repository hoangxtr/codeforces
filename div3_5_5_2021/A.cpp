#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main() {
    int n, temp;
    string s;
    vector<string> vtString;
    cin >> n;
    int a[26];
    bool check = true;
    char old = 0;
    for (int i = 0; i < n; i ++){
        cin >> temp;
        cin >> s;
        vtString.push_back(s);
    }
    for (int i = 0; i < n; i ++){
        s = vtString[i];
        old = 0;
        for (int j = 0; j < 26; j ++) a[j] = 0;
        check = true;
        for (int c = 0; c < s.length(); c ++){
            if (s[c] != old && a[s[c]-'A'] == 1){
                cout << "NO\n";
                check = false;
                break;
            }
            else  a[s[c]-'A'] = 1;
            
            old = s[c];
        }
        if (check == true) cout << "YES\n";
    }
}