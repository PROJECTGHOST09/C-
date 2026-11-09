#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter the string: ";
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        int count = 0;
        bool alreadyChecked = false;
        
        for (int k = 0; k < i; k++) {
            if (s[k] == s[i]) {
                alreadyChecked = true;
                break;
            }
        }

        if (alreadyChecked)
            continue;

        for (int j = 0; j < s.length(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }

        if (count > 1) {
            cout << s[i] << " is repeated " << count << " times" << endl;
        }
    }

    return 0;
}